#include <iostream>
#include <cstring>

int count;
int current;

void merge(int *arr, int p, int q, int r)
{
	int i = p;
	int j = q+1;
	int k = 1;

	int *tmp = new int[r];

	while(i<q && j<r){
		
		if(current == count){
			std::cout << tmp[k];
			break;
		}

		if(arr[i] < arr[j])
			tmp[k++] = arr[i++];
		else
			tmp[k++] = arr[j++];

		current++;
	}

	/*
	while(i<=q)
		tmp[k++] = arr[i++];
	
	while(j<=r)
		tmp[k++] = arr[j++];
	
	std::memmove(arr, tmp, r);
	*/

	delete tmp;

}

void merge_sort(int *arr, int p, int r)
{
	if(p < r){
		int q = (p + r)/2;
		merge_sort(arr, p, q);
		merge_sort(arr,q+1, r);
		merge(arr, p, q, r);
	}
}

int main()
{
	int num;

	std::cin >> num >> count;

	int *data = new int[num];

	for(int i=0; i<num; i++){
		
		std::cin >> data[i]; 
	}

	merge_sort(data, 0, num-1);
/*
	for(int i=0; i<num; i++){

		std::cout << data[i];
	}
*/
	return 0;
}

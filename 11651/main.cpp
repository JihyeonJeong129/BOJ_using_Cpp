#include <iostream>
#include <algorithm>

bool compare (int* i, int* j){
	
	if(i[1] < j[1]){
		return true;
	}

	else if(i[1] == j[1]){
		
		if(i[0] < j[0]){
			return true;
		}
		else{
			return false;
		}
	}
	else{
		return false;
	}
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int num;

	std::cin >> num;

	//memory allocation

	int **arr = new int*[num];

	for(int i = 0; i < num; i++){
		
		arr[i] = new int[2];
	}

	for(int i = 0; i < num; i++){
		
		std::cin >> arr[i][0] >> arr[i][1];
	}

	std::stable_sort(arr, arr + num, compare);

	for(int i = 0; i < num; i++){
		
		std::cout << arr[i][0] << " " << arr[i][1] << "\n";
	}

	//memory deallocation
	for(int i = 0; i < num; i++){
		
		delete[] arr[i];
	}

	delete[] arr;

	return 0;
}

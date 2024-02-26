#include <iostream>
#include <cmath>

void make_space(char *arr, int n, int r)
{
	for(int i=0; i<r; i++){
		arr[n+i] = ' ';
	}
}

void cantor(char *arr, int n, int r)
{
	if(r == 1)
		return;

	cantor(arr, n, r/3);
	make_space(arr, n+r/3, r/3);
	cantor(arr, n+(r/3)*2, r/3);
}

int main()
{
	int n;

	while(std::cin >> n){
		
		int value = pow(3,n);
		
		char *data = new char[value+1];

		for(int i=1; i<=value; i++){
			data[i] = '-';
		}

		cantor(data, 1, value);

		for(int i=1; i<=value; i++){
			std::cout << data[i];
		}

		std::cout << std::endl;

		delete []data;
	}

	return 0;
}

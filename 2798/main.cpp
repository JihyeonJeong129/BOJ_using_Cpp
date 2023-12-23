#include <iostream>

int main()
{
	int m,n;

	std::cin >> n >> m;

	int* arr = new int[n];

	for(int i = 0; i < n; i++){
		std::cin >> arr[i];
	}

	int a,b,c; //save location of 3-cards

	int near_num = -1;

	a = -1, b = -1, c = -1; // a,b,c initialize


	//iteration of all case
	for(int i = 0; i <= n - 3; i++){

		for(int j = i+1; j <= n - 2; j++){

			for(int k = j+1; k <= n - 1; k++){
				
				int temp = arr[i] + arr[j] + arr[k];

				if(temp <= m && near_num < temp){
					
					a = i;
					b = j;
					c = k;
					
					near_num = temp;

				}
			}
		}
	}

	std::cout << near_num << std::endl;

	return 0;
}

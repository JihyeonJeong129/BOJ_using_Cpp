#include <iostream>
#include <cstdlib>

int main()
{
	int m,n;

	std::cin >> n >> m;

	int* arr = new int[n];

	for(int i = 0; i < n; i++){
		std::cin >> arr[i];
	}

	int a,b,c; //save location of 3-cards

	int near_num = 1000;

	a = -1, b = -1, c = -1; // a,b,c initialize


	//iteration of all case
	for(int i = 0; i <= n - 3; i++){

		for(int j = i+1; j <= n - 2; j++){

			for(int k = j+1; k <= n - 1; k++){
				
				if((m - arr[i] - arr[j] - arr[k]) < near_num && 
					(m - arr[i] - arr[j] - arr[k]) >= 0){
					
					a = i;
					b = j;
					c = k;

					near_num = std::abs(m - arr[i] - arr[j] - arr[k]);
				}
			}
		}
	}

	std::cout << (m - near_num) << std::endl;

	return 0;
}

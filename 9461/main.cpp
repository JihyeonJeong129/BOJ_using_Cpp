#include <iostream>
#include <cstring>

int main()
{
	int t;

	std::cin >> t;

	long long *data = new long long[100]{0,1,1,1,2,2,3,4,5,7,9};

	for(int i=11; i<=100; i++){
		data[i] = 0;
	}

	for(int i=0; i<t; i++){
		
		int temp;

		std::cin >> temp;

		if(data[temp] != 0){
			std::cout << data[temp] << "\n";
		}

		else{
			int idx = 11;

			while(true){
				
				if(data[idx] == 0){
					break;
				}
				
				idx++;
			}

			for(int i=idx; i<=temp; i++){
				data[i] = data[i-1]+data[i-5];
			}

			std::cout << data[temp] << "\n";
		}
	}

	delete[] data;

	return 0;
}

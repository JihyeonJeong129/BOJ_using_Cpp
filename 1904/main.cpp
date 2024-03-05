#include <iostream>
#include <cstring>

int main()
{
	int n;

	std::cin >> n;

	int *data = new int[n+1];

	std::memset(data, 0, sizeof(int)*(n+1));

	data[1] = 1;
	data[2] = 2;
	if(n >=3){
		
		for(int i = 3; i<=n; i++){
			
			data[i] = (data[i-1]+data[i-2])%15746;
		}
	}

	std::cout << data[n] << "\n";

	delete[] data;

	return 0;
}

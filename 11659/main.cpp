#include <iostream>
#include <cstring>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int num, count;

	std::cin >> num >> count;

	int *input = new int[num+1];

	int *data = new int [num+1];

	std::memset(input, 0, sizeof(int)*(num+1));

	std::memset(data, 0, sizeof(int)*(num+1));
	
	for(int i=1; i<=num; i++){
		int temp;
		std::cin >> temp;
		input[i] = temp;
		data[i] = input[i] + data[i-1];
	}

	int n,m;

	for(int i=0; i< count; i++){
	
		std::cin >> n >> m;
		std::cout << data[m] - data[n-1] << "\n";
	}

	return 0;
}

#include <iostream>
#include <cstring>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n,m;

	std::cin >> n >> m;

	long long *data = new long long[n+1];

	std::memset(data, 0, sizeof(long long)*(n+1));

	for(int i=1; i<=n; i++){
		
		int temp;

		std::cin >> temp;

		data[i] = temp + data[i-1];

		data[i] = data[i]%m;
	}

	long long *remainder = new long long[m+1];

	std::memset(remainder, 0, sizeof(long long)*(m+1));

	long long count = 0;

	for(int i=1; i<=n; i++){
		if(data[i] == 0)
			count++;
	}

	for(int i=1; i<=n; i++){
		remainder[data[i]]++;	
	}
	
	for(int i=0; i<=m; i++){
		count = count + (remainder[i]*(remainder[i]-1))/2;	
	}

	std::cout << count << "\n";

	delete[] data;

	delete[] remainder;

	return 0;
}

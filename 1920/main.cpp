#include <iostream>
#include <algorithm>

bool binary_serach(int *data, int find_value, int range){
	
	int init = 0;

	int end = range-1;

	int mid;

	while(init <= end){
		
		mid = (init+end)/2;

		if(find_value == data[mid]){
			return true;
		}

		else if(find_value > data[mid]){
			init = mid+1;
		}

		else if(find_value < data[mid]){
			end = mid - 1;
		}
	}

	return false;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n;

	std::cin >> n;

	int *data = new int[n];

	for(int i=0; i<n; i++){
		
		std::cin >> data[i];
	}

	std::sort(data, data+n);

	int m;

	std::cin >> m;

	for(int i=0; i<m; i++){
		
		int temp;

		std::cin >> temp;

		bool result = binary_serach(data, temp, n);

		std::cout << result << "\n";
	}

	delete[] data;

	return 0;
}

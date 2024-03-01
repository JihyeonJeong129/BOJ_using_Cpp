#include <iostream>
#include <vector>
#include <algorithm>

void print_vector(std::vector<int> &data)
{
	for_each(data.begin(), data.end(), [&](int &n){
		std::cout << n << " ";
	});

	std::cout << "\n";
}

void find_case(std::vector<int> &data, int m, int n, int count)
{
	count++;

	if(count > m){
		print_vector(data);
		count--;
		return;
	}

	if(data.empty()){
		
		for(int i=1; i<=n; i++){
			data.push_back(i);
			find_case(data, m, n, count);
			data.pop_back();
		}
	}

	else{
		for(int i=data.back(); i<=n; i++){
			data.push_back(i);
			find_case(data, m, n, count);
			data.pop_back();
		}
	}

	count--;
}

int main()
{
	int m,n;

	int count = 0;

	std::cin >> n >> m;

	std::vector<int> data;

	find_case(data, m, n, count);

	return 0;
}

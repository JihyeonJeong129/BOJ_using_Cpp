#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> data;

int m, n;

int count;

void print_vector()
{
	for_each(data.begin(), data.end(), [&](int &n){
		std::cout << n << " ";
	});

	std::cout << "\n";
}

void find_case()
{
	count++;

	if(count > m){
		print_vector();
		count--;
		return;
	}

	if(data.empty()){
		
		for(int i=1; i<=n; i++){
			data.push_back(i);
			find_case();
			data.pop_back();
		}
	}

	else{
		for(int i=data.back(); i<=n; i++){
			data.push_back(i);
			find_case();
			data.pop_back();
		}
	}

	count--;
}

int main()
{
	std::cin >> n >> m;

	find_case();

	return 0;
}

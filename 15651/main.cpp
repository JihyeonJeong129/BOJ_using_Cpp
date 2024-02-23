#include <iostream>
#include <algorithm>
#include <vector>

std::vector<int> data;

int n,m;

void printStack()
{
	std::for_each(data.begin(), data.end(), [](const int n){std::cout << n << ' ';});
	std::cout << "\n";
}

void backtrack(int iter)
{
	if(data.size() == m)
		printStack();
	
	else{
		for(int i = iter; i<=n; i++){
			data.push_back(i);
			backtrack(iter);
			data.pop_back();
		}
	}
	
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> n >> m;

	backtrack(1);

	return 0;
}

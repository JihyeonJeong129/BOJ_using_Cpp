#include <iostream>
#include <algorithm>
#include <vector>

void printStack(std::vector<int> &stack)
{
	std::for_each(stack.begin(), stack.end(), [](const int n){std::cout << n << ' ';});
	std::cout << "\n";
}

void backtrack(std::vector<int> &stack, int iter, int n, int m)
{
	if(stack.size() == m)
		printStack(stack);
	
	else{
		for(int i = iter; i<=n; i++){
			stack.push_back(i);
			backtrack(stack, iter, n, m);
			stack.pop_back();
		}
	}
	
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::vector<int> data;
	
	int n,m;

	std::cin >> n >> m;

	backtrack(data, 1, n, m);

	return 0;
}

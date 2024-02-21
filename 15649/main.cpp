#include <iostream>
#include <vector>
#include <algorithm>

int n,m;

std::vector<int> data;

std::vector<bool> used;

void printstack()
{
	std::for_each(data.begin(), data.end(), [](const int n) {std::cout << n << ' ';});

	std::cout << "\n";
}

void backtrack()
{
	if(data.size() == m)
		printstack();
	else{
		for(int i=1; i<=n; i++){
			if(!used[i]){
				used[i] = true;
				data.push_back(i);
				backtrack();
				data.pop_back();
				used[i] = false;
			}	
		}
	}
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> n >> m;

	used = std::vector<bool>(n+1, false);	
	
	backtrack();

	return 0;
}

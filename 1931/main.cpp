#include <iostream>
#include <algorithm>
#include <vector>

int now;

int count;

void compare(std::pair<int, int> data){
	
	if(data.second >= now){
		now = data.first;
		count++;
	}
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int num;

	std::cin >> num;

	std::vector<std::pair<int,int>> data;

	for(int i=0; i<num; i++){
		
		int start, end;

		std::cin >> start >> end;

		data.push_back({end, start});
	}

	std::sort(data.begin(), data.end());
	
	std::for_each(data.begin(), data.end(), compare);

	std::cout << count << "\n";

	return 0;
}

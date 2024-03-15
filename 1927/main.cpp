#include <iostream>
#include <queue>
#include <functional>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::priority_queue<int, std::vector<int>, std::greater<int>> queue;

	int count;

	std::cin >> count;

	for(int i=0; i<count; i++){
		
		int temp;

		std::cin >> temp;

		if(temp == 0){
			if(!queue.empty()){
				std::cout << queue.top() << "\n";
				queue.pop();
			}

			else{
				std::cout << "0" << "\n";
			}
		}

		else{
			queue.push(temp);
		}
	}

	return 0;
}

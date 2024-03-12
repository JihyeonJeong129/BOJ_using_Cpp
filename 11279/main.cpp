#include <iostream>
#include <queue>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	
	int count;

	std::cin >> count;

	std::priority_queue<int> queue;

	for(int i=0; i<count; i++){
		
		int temp;

		std::cin >> temp;

		if(temp == 0 && !queue.empty()){
			std::cout << queue.top() << "\n";
			queue.pop();
		}
	
		else if(temp == 0 && queue.empty()){
			std::cout << "0" << "\n";
		}
		
		else{
			queue.push(temp);
		}
	}

	return 0;
}

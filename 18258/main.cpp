#include <iostream>
#include <queue>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::queue<int> queue;

	int count;

	std::cin >> count;

	for(int i = 0; i < count; i++){

		std::string str;

		std::cin >> str;

		if(str == "push"){
			int num;
			std::cin >> num;
			queue.push(num);
		}

		else if(str == "pop"){
			if(queue.empty())
				std::cout << "-1" << "\n";
			else{
				std::cout << queue.front() << "\n";
				queue.pop();
			}
		}

		else if(str == "size"){
			std::cout << queue.size() << "\n";
		}

		else if(str == "empty"){
			if(queue.empty())
				std::cout << "1" << "\n";
			else
				std::cout << "0" << "\n";
		}

		else if(str == "front"){
			if(queue.empty())
				std::cout << "-1" << "\n";
			else
				std::cout << queue.front() << "\n";
		}
		
		else if(str == "back"){
			if(queue.empty())
				std::cout << "-1" << "\n";
			else
				std::cout << queue.back() << "\n";
		}
	}

	return 0;
}

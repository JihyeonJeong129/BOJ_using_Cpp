#include <iostream>
#include <deque>
#include <tuple>

int main()
{
	int count;

	std::cin >> count;

	std::deque<std::pair<int, int>> deque;

	for(int i=0; i<count; i++){
		
		int num;

		std::cin >> num;

		deque.push_back({i+1, num});
	}

	while(true){
		
		auto data = deque.front();

		deque.pop_front();

		std::cout << data.first << " ";
		
		if(deque.size() == 0){
			break;
		}

		if(data.second < 0){
			int rot = data.second*(-1);
			for(int i=1; i<=rot; i++){
				auto temp = deque.back();
				deque.pop_back();
				deque.push_front(temp);
			}
		}

		else{
			int rot = data.second;
			for(int i=1; i<rot; i++){
				auto temp = deque.front();
				deque.pop_front();
				deque.push_back(temp);
			}
		}
	}
	return 0;
}

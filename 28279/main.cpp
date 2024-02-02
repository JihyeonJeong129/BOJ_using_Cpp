#include <iostream>
#include <deque>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int count;

	std::cin >> count;

	std::deque<int> deque;

	for(int i = 0; i<count; i++){
		
		int case_num;

		std::cin >> case_num;

		if(case_num == 1){
			int num;
			std::cin>>num;

			deque.push_front(num);
		}

		else if(case_num == 2){
			int num;
			std::cin>>num;

			deque.push_back(num);
		}

		else if(case_num == 3){
			if(deque.empty()){
				std::cout << "-1" << "\n";
			}
			
			else{
				std::cout << deque.front() << "\n";
				deque.pop_front();
			}
		}

		else if(case_num == 4){
			if(deque.empty()){
				std::cout << "-1" << "\n";
			}
			
			else{
				std::cout << deque.back() << "\n";
				deque.pop_back();
			}
		}

		else if(case_num == 5){
			std::cout << deque.size() << "\n";
		}
	
		else if(case_num == 6){
			if(deque.empty())
				std::cout << "1" << "\n";
			else
				std::cout << "0" << "\n";
		}
		
		else if(case_num == 7){
			if(deque.empty())
				std::cout << "-1" << "\n";
			else
				std::cout << deque.front() << "\n";
		}
		
		else if(case_num == 8){
			if(deque.empty())
				std::cout << "-1" << "\n";
			else
				std::cout << deque.back() << "\n";
		}
	}

	return 0;
}

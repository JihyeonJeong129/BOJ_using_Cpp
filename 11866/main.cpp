#include <iostream>
#include <deque>

int main()
{
	int num;

	int k;

	std::cin >> num >> k;

	std::deque<int> deque;

	std::deque<int> result;

	for(int i = 1; i<=num; i++)
		deque.push_back(i);

	while(!deque.empty()){
		
		for(int i=1; i<k; i++){
			int temp = deque.front();
			deque.push_back(temp);
			deque.pop_front();
		}

		int pop = deque.front();

		result.push_back(pop);

		deque.pop_front();
	}

	std::cout << "<";

	while(!result.empty()){
		if(result.size() == 1){
			std::cout << result.front();
			break;
		}
		else{
			std::cout << result.front() << ", ";
			result.pop_front();
		}
	}

	std::cout << ">" << std::endl;

	return 0;
}

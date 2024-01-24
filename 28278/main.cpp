#include <iostream>
#include <stack>

int main()
{
	std::ios_base :: sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int num;

	std::cin >> num;

	std::stack<int> stack;

	for(int i = 0; i < num; i++){
		
		int input;

		std::cin >> input;

		if(input == 1){
			int temp;
			std::cin >> temp;
			stack.push(temp);
		}

		else if(input == 2){
			if(stack.empty()){
				std::cout << "-1" << "\n";
			}
			else{
				std::cout << stack.top() << "\n";
				stack.pop();
			}
		}

		else if(input == 3){
			std::cout << stack.size() << "\n"; 
		}

		else if(input == 4){
			if(stack.empty()){
				std::cout << "1" << "\n";
			}
			else{
				std::cout << "0" << "\n";
			}
		}

		else if(input == 5){
			if(stack.empty()){
				std::cout << "-1" << "\n";
			}
			else{
				std::cout << stack.top() << "\n";
			}
		}
	}

	return 0;
}

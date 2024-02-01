#include <iostream>
#include <stack>

int main()
{
	int count;

	std::cin >> count;

	std::stack<int> stack;

	for(int i = 0; i < count; i++){
		
		int num;

		std::cin >> num;

		if(num == 0){
			stack.pop();	
		}

		else{
			stack.push(num);
		}
	}

	int sum = 0;

	while(!stack.empty()){
		sum = sum + stack.top();
		stack.pop();
	}

	std::cout << sum << "\n";

	return 0;
}

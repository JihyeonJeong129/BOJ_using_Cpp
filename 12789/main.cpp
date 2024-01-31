#include <iostream>
#include <stack>

/*
* stack_check function ckecks that the given stack as a parameter
* contains elements that fit the order  
* 
* if stack has elements that fit the order than return true, otherwise return false. 
*/
bool stack_check(std::stack<int> &stack, int &gb_idx)
{
	int origin_stack_size = stack.size();

	for(int i = 0; i < origin_stack_size; i++){
		
		if(stack.top() != gb_idx){
			return false;
		}

		else{
			stack.pop();
			gb_idx++;
		}
	}

	return true;
}


int main()
{
	int num;
	int gb_idx = 1;

	std::stack<int> stack;

	std::cin >> num;
	
	for(int i = 0; i < num; i++){
		
		int temp;

//data input
		std::cin >> temp;
		
		if(temp != gb_idx){
			
			if(!stack.empty() && stack.top() == gb_idx){
				
				stack_check(stack, gb_idx);
				
				stack.push(temp);
			}

			else{
				stack.push(temp);
			}
		}
		
		else{
			gb_idx++;
		}
	}

//print result
	if(stack_check(stack, gb_idx))
		std::cout << "Nice" << std::endl;
	else
		std::cout << "Sad" << std::endl;

	return 0;
}

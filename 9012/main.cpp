#include <iostream>
#include <stack>

/*
* The ckeck function is ckecks whether the parentheses pair 
* of a string is normal when it is received as input
*/

bool check(std::string str)
{
	std::stack<char> stack;

	for(int i=0; i<str.length(); i++){
		if(str[i] == '('){
			stack.push(str[i]);
		}
		
		else{
			if(!stack.empty())
				stack.pop();
			else
				return false;
		}
	}

//stack check
	if(stack.empty())
		return true;
	else
		return false;
}

int main()
{
	int count;

	std::cin >> count;

	for(int i=0; i<count; i++){

		std::string str;
		
//string insertion	
		std::cin >> str;

//stack empty check
		if(check(str))
			std::cout << "YES" << "\n";
		else
			std::cout << "NO" << "\n";
	}

	return 0;
}

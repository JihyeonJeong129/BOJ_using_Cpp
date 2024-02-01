#include <iostream>
#include <stack>
#include <string>

bool match(char input)
{
	if(input)
}

bool check(std::string str)
{
	int i;

	std::stack<char> data;

	for(i = 0; i < str.length(); i++){
		if(str[i] == '(' || str[i] == '['){
			data.push(str[i]);
		}

		else if(str[i] == ')'){
			if(data.empty() || data.top() != '('){
				return false;
			}

			else
				data.pop();
		}
//short circuit eval
		else if(str[i] == ']'){
			if(data.empty() || data.top() != '['){
				return false;
			}

			else
				data.pop();
		}
	}

	return data.empty();


}

int main()
{
	std::string str;

	while(true){
		
		getline(std::cin, str);

		if(str == "."){
			break;
		}

		if(check(str))
			std::cout << "yes" << "\n";

		else
			std::cout << "no" << "\n";

	}

	return 0;
}

#include <iostream>
#include <stack>
#include <string>

int main()
{
	std::string str;

	while(true){
		
		getline(std::cin, str);

		std::stack<char> data;

		if(str == "."){
			break;
		}

		int i;

		for(i = 0; i < str.length(); i++){
			if(str[i] == '(' || str[i] == '['){
				data.push(str[i]);
			}

			else if(str[i] == ')'){
				if(data.empty() || data.top() != '('){
					std::cout << "no" << "\n";	
					break;
				}

				else
					data.pop();
			}
//short circuit eval
			else if(str[i] == ']'){
				if(data.empty() || data.top() != '['){
					std::cout << "no" << "\n";
					break;
				}

				else
					data.pop();
			}
		}

		if(i == str.length()){
			if(data.empty()){
				std::cout << "yes" << "\n";
			}
			else{
				std::cout << "no" << "\n";
			}
		}
	}

	return 0;
}

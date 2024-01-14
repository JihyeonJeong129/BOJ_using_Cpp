#include <iostream>
#include <map>
#include <cstring>

int main()
{
	int num;

	std::cin >> num;

	std::map<std::string, int> data;

	for(int i = 0; i < num; i++){
		
		std::string str1, str2;

		std::cin >> str1 >> str2;

		if(strcmp(str1, "enter") == 0){

			data.insert({str2,i});
		}

		else{
			data.erase(str2);
		}
	}

	for(auto iter = data.begin(); iter != data.end; iter++){
		
		std::cout << iter->first << "\n";
	}

	return 0;
}

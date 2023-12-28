#include <iostream>
#include <string>
#include <algorithm>

bool compare_length(std::string str1, std::string str2){

	if(str1.length() > str2.length()){
		return false;
	}

	else{
		return true;
	}
}

int main()
{
	int num;

	std::cin >> num;

	std::string *str = new std::string[num];

	for(int i= 0; i < num; i++){
		
		std::cin >> str[i];
	}

	std::sort(str, str+num, compare_length);

	for(int i = 0; i < num; i++){
		
		std::cout << str[i] << "\n";
	}

	
	delete [] str;

	return 0;
}

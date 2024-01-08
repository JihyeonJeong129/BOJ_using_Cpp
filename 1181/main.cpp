#include <iostream>
#include <string>
#include <algorithm>

bool compare(std::string str1, std::string str2){

	if(str1.length() > str2.length()){
		return false;
	}
	
	else if(str1.length() == str2.length()){
		return str1 < str2;
	}

	else{
		return true;
	}
}


int main()
{
	std::ios_base :: sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int num;

	std::cin >> num;

	std::string *str = new std::string[num+1];

	for(int i= 0; i < num; i++){
		
		std::cin >> str[i];
	}

	std::sort(str, str+num, compare);

	auto last = std::unique(str, str+num);

	std::sort(str, last, compare);

	for(int i = 0; &str[i] < last; i++){
		
		std::cout << str[i] << "\n";	
	}

	
	delete [] str;

	return 0;
}

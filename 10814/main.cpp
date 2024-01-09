#include <iostream>

int main()
{
	int num;

	std::cin >> num;

	int *age = new int[num];

	std::string *str = new std::string[num];

	for(int i = 0 ; i < num; i++){
	
		std::cin >> num[i] >> str[i];
	}



	return 0;
}

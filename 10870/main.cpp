#include <iostream>

int fibonacci(int num){
	if(num == 0)
		return 0;
	else if(num==1 || num==2)
		return 1;
	else
		return fibonacci(num-1) + fibonacci(num-2);
}

int main()
{
	int num;

	std::cin >> num;

	std::cout << fibonacci(num) << std::endl;

	return 0;
}

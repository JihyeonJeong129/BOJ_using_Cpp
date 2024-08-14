#include <iostream>

long long factorial(int num)
{
	if(num == 0 || num == 1)
		return 1;
	else
		return num*factorial(num-1);
}

int main()
{
	int num;

	std::cin >> num;

	std::cout << factorial(num);

	return 0;
}

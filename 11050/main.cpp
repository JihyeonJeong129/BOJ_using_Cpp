#include <iostream>

long long factorial(int num)
{
	long long result = 1;

	for(int i = num; i>0; i--){
		result = result * i;
	}

	return result;
}

int main()
{
	int n,r;

	std::cin >> n >> r;

	std::cout << factorial(n)/factorial(r)/factorial(n-r) << std::endl;

	return 0;
}

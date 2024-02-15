#include <iostream>

int main()
{
	int num;

	std::cin >> num;

	long long result = 1;

	for(int i = num; i>0; i--){
		result = result * i;
	}

	std::cout << result << std::endl;

	return 0;
}

#include <iostream>

int euclidean_algorithm(int num1, int num2){
	
	if(num2 == 0){
		return num1;
	}

	else{

		return euclidean_algorithm(num2, num1%num2);
	}
}

int main()
{
	int num1, num2;

	std::cin >> num1 >> num2;

	std::cout << num1 * num2 / euclidean_algorithm(num1, num2);

	return 0;
}

#include <iostream>

int euclidean_algorithm(int num1, int num2)
{
	if(num2 == 0){
		return num1;
	}

	else{
		return euclidean_algorithm(num2, num1%num2);
	}

	return 0;
}

int main()
{
//data insertion
	int denominator1, denominator2;

	int numerator1, numerator2;

	std::cin >> numerator1 >> denominator1;

	std::cin >> numerator2 >> denominator2;

//find common denominator
	int gcd = euclidean_algorithm(denominator1, denominator2);

	int lcm = denominator1 * denominator2 / gcd;

//find result
	int numerator_result, denominator_result;

	numerator_result = (numerator1)*(lcm/denominator1) + (numerator2)*(lcm/denominator2); 
	denominator_result = lcm;

//check if numerator and denominator have common devider

	int common_devider = euclidean_algorithm(numerator_result, denominator_result);

	numerator_result = numerator_result/common_devider;

	denominator_result = denominator_result/common_devider;
	
	std::cout << numerator_result << " " << denominator_result;

	return 0;
}

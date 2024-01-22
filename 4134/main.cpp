#include <iostream>
#include <cmath>

/*
check input value is prime number

if input value is prime number then return true

eles, return false 
*/
bool check_primenum(long num)
{
	for(long i = 2; i <= (long)sqrt(num); i++){
		if(num%i == 0){
			return false;
		}
	}

	return true;
}

int main()
{
	long count;
	
	std::cin >> count;
	
	for(long i = 0; i < count; i++){
		
		long num;

		std::cin >> num;

//special case
		if(num == 0 || num == 1){
			std::cout << "2" << "\n";
			continue;
		}

//general case
		num = num + 1;

		while(true){
			if(check_primenum(num)){
				std::cout << num << "\n";
				break;
			}

			num = num + 1;
		}
	}

	return 0;
}

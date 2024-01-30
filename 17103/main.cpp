#include <iostream>
#include <cmath>

int Goldbach_Partition(int num)
{
	bool *prime_num = new bool[num+1];

//prime number array initialize
	for(int i = 0; i <= num; i++){
		prime_num[i] = true;
	}

//find prime number using Eratos's method

	prime_num[0] = false;
	prime_num[1] = false;

	prime_num[2] = true;

	for(int i = 2; i <=sqrt(num); i++){
		
		if(prime_num[i] == true){

			for(int j = 2; i*j <= num; j++){
				
				prime_num[i*j] = false;
			}
		}
	}	

//find combination sum of two prime number

	int count = 0;

	for(int i = 2; i <= num/2; i++){
		
		if(prime_num[i] == true && prime_num[num-i] == true)
			count++;
	}

	return count;
}


int main()
{
	int count;

	std::cin >> count;

	for(int i = 0; i < count; i++){
		
		int num;

		std::cin >> num;

		std::cout << Goldbach_Partition(num) << "\n";
	}

	return 0;
}

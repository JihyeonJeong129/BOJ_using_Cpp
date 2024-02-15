#include <iostream>

unsigned long long factorial(int num)
{
	unsigned long long result = 1;

	for(int i = num; i > 0; i--){
		result = result * i;
	}

	//std::cout << num << " factorial is " << result << std::endl;

	return result;
}

unsigned long long combination(int n, int r)
{
	unsigned long long result = 1;

	int fact = r;

	for(int i = n; i >= n-r+1; i--){
		result = result * i;

		if(result%fact == 0){
			result = result/fact;
			fact--;
		}
	}

	result = result/factorial(fact);

	return result;
}

int main()
{
	int num;

	std::cin >> num;

	for(int i=0; i< num; i++){
		
		int n,r;

		std::cin >> r >> n;

		std::cout << combination(n,r) << "\n"; 
	}

	return 0;
}

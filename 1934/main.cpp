#include <iostream>

int euclidean_algorithm(int num1, int num2)
{
	if(num1 == 0){
		
		return num2;
	}

	else{
		return euclidean_algorithm(num2%num1, num1);
	}

}

int main()
{
	int count;

	std::cin >> count;

//memory allocation
	int **arr = new int*[count];

	for(int i = 0; i < count; i++){
		
		arr[i] = new int[2];
	}

//data insert
	for(int i = 0; i < count; i++){
		
		std::cin >> arr[i][0] >> arr[i][1];
	}

//find GCD
	int *gcd = new int[count];

	for(int i = 0; i < count; i++){
		
		gcd[i] = euclidean_algorithm(arr[i][0], arr[i][1]);
	}

//print result
	for(int i = 0; i < count; i++){
		
		std::cout << arr[i][0]*arr[i][1]/gcd[i] << "\n";
	}

//memory deallocation
	for(int i = 0; i < count; i++){
		
		delete[] arr[i];
	}

	delete[] arr;

	return 0;
}

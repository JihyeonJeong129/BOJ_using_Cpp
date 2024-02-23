#include <iostream>

int count_recursion, count_dynamic;

int fibonacci_recursion(int n)
{
	if(n == 1 || n == 2){
		count_recursion++;
		return 1;
	}
	else{
		return fibonacci_recursion(n-1) + fibonacci_recursion(n-2);
	}
}

int fibonacci_dynamic(int n, int* &data, bool* &check)
{
	if(check[n] == true)
		return data[n];
	
	else if(n == 1 || n == 2){
		return 1;
	}

	else{
		data[n] = fibonacci_dynamic(n-1, data, check)+fibonacci_dynamic(n-2, data, check);
		count_dynamic++;
		check[n] = true;
		return data[n];
	}
}

int main()
{
	int num;

	std::cin >> num;

	bool *ckeck_dynamic = new bool[num+1];

	int *data_dynamic = new int[num+1];

	for(int i=0; i<=num; i++)
		ckeck_dynamic[i] = false;
	
	fibonacci_recursion(num);

	fibonacci_dynamic(num, data_dynamic, ckeck_dynamic);

	std::cout << count_recursion << " " << count_dynamic << std::endl;

	return 0;
}

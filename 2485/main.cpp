#include <iostream>

int euclidean_algorithm(int num1, int num2)
{
	if(num2 == 0){
		return num1;
	}

	else{
		return euclidean_algorithm(num2, num1%num2);
	}
}

int main()
{

//data insertion
	int count;

	std::cin >> count;

	int *data = new int[count];
	
	for(int i = 0; i < count; i++){
		
		std::cin >> data[i];
	}
	
//find distance
	int *distance = new int[count-1];

	for(int i = 1; i < count; i++){
		
		distance[i - 1] = data[i]-data[i-1];
	}

//find gcd of distance
	int gcd = euclidean_algorithm(distance[0], distance[1]);

	for(int i = 2; i < count-1; i++){
		
		gcd = euclidean_algorithm(gcd, distance[i]);
	}

//calculate the number of tree that need to be planted
	int number_tree = 0;

	for(int i = 0; i < (count-1); i++){
		
		number_tree = number_tree + distance[i]/gcd - 1; 
	}

	std::cout << number_tree;

	delete[] data;

	delete[] distance;

	return 0;
}

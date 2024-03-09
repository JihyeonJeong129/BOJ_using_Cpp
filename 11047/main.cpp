#include <iostream>
#include <cstring>

int main()
{	
	int count, amount;

	std::cin >> count >> amount;

	int *value = new int[count];

	int count_result = 0;

	for(int i=0; i<count; i++){
		
		std::cin >> value[i];
	}

	for(int i=count-1; i>=0; i--){
		if(amount/value[i] > 0){
			count_result = count_result + amount/value[i];		
			amount = amount - value[i]*(amount/value[i]);
		}
	}	

	delete[] value;

	std::cout << count_result << "\n";

	return 0;
}

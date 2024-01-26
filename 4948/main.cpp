#include <iostream>
#include <cmath>

int Eratos(int num){
	
	bool *data = new bool[2*num+1];

	for(int i=0; i<=2*num; i++){
		
		data[i] = true;
	}

	data[1] = false;

	for(int i = 2; i <= 2*num; i++){
		
		if(data[i] == true){
			
			for(int j=2; i*j<=(2*num); j++)
				data[i*j] = false;
		}
	}

	//prinme number count process between num and 2*num

	int count = 0;

	for(int i = num+1; i<=(2*num); i++){
		if(data[i] == true)
			count++;
	}

	delete[] data;

	return count;
}


int main()
{
	while(true){

		int num;

		std::cin >> num;

		if(num == 0)
			break;

		std::cout << Eratos(num) << "\n";
	}

	return 0;
}

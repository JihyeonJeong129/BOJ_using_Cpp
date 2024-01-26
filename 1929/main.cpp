#include <iostream>
#include <cmath>

void Eratos(int start, int end)
{
	bool *data = new bool[end+1];

	for(int i = 0; i <= end; i++){
		data[i] = true;
	}

	data[1] = false;

	for(int i = 2; i <= sqrt(end); i++){
		
		if(data[i] == true){

			for(int j = 2; i*j <= end; j++){
					
					data[i*j] = false;
			}
		}
	}

	for(int i=start; i<=end; i++){
		if(data[i] == true){
			std::cout << i << "\n";
		}
	}

}

int main()
{
	int start, end;

	std::cin >> start >> end;

	Eratos(start, end);

	return 0;
}

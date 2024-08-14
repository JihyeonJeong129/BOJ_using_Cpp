#include <iostream>
#include <cstring>
#include <algorithm>

int data[1000][2];

int red, green, blue;

int i;

void min(int red, int green, int blue){
	
	if(red>=green && red>=blue){
		data[i][1] = 1;
		data[i][0] = red;	
	}

	else if(green>=red && green>=blue){
		data[i][1] = 2;
		data[i][0] = green;
	}

	else
		data[i][1] = 3;
		data[i][0] = blue;
}

int min_value(){
	
	int before = data[i-1][1];

	if(before == 1)
		return std::min(green, blue);
	else if(before == 2)
		return std::min(red, blue);
	else if(brefore == 3)
		return std::min(red, green);
	else
		return std::min(red, green, blue);
}

int main()
{
	int num;

	std::cin >> num;

	for(int i=0; i<num; i++){
		
		std::cin >> red >> green >> blue;


	}

	return 0;
}

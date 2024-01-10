#include <iostream>
#include <algorithm>

struct data{

	int value;
	int origin_idx;
	int trans_cordinate;
};

bool sort_idx(data d1, data d2){

	if(d1.origin_idx < d2.origin_idx){
		return true;
	}

	return false;
}

bool sort_value(data d1, data d2){

	if(d1.value < d2.value){
		return true;
	}

	return false;
}

int main()
{
	int num;

	std::cin >> num;

	data *arr = new data[num];

//input data
	for(int i = 0; i < num; i++){

		std::cin >> arr[i].value;
		arr[i].origin_idx = i;
	}

//find the number of coordinates
	std::sort(arr, arr+num, sort_value);

	int gb_idx = 0;

	arr[0].trans_cordinate = 0;

	for(int i = 1; i < num; i++){
		
		if(arr[i-1].value == arr[i].value){
			arr[i].trans_cordinate = gb_idx;
		}

		else{

			arr[i].trans_cordinate = (++gb_idx);
		}
	}

	std::sort(arr, arr+num, sort_idx);

	for(int i = 0; i < num; i++){
		std::cout << arr[i].trans_cordinate << " ";
	}
	
	delete [] arr;

	return 0;
}

#include <iostream>
#include <map>
#include <cmath>
#include <algorithm>
#include <cstring>

int main()
{
	int num;

	std::cin >> num;

	int *arr = new int[num];

	long long sum = 0;

//data insertion
	for(int i=0; i<num; i++){
		
		std::cin >> arr[i];
		
		sum = sum + arr[i];
	}

//print avg value
	std::cout << (int)std::round((double)sum/(double)num) << "\n";
	
//print mid value
	std::sort(arr, arr + num);

	std::cout << arr[num/2] << "\n";

//print max_count value

	int *max_count = new int[8001];

	std::memset(max_count, 0, 8001);

	for(int i=0; i<num; i++){
		max_count[4000+arr[i]]++;
	}

	int max = 0;
	int idx = -1;

	int max_count_bool = 0;

//find max_val
	for(int i=-4000; i<=4000; i++){
		if(max_count[4000+i] > max){
			max = max_count[4000+i];
			idx = i;
		}
	}

	for(int i = idx+1; i<=4000; i++){
		if(max_count[4000+i] == max_count[4000+idx]){
			idx = i;
			break;
		}
	}

	std::cout << idx << "\n";

//print range of value
	std::cout << arr[num-1] - arr[0] << std::endl;

	return 0;
}

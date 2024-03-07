#include <iostream>
#include <cstring>

int main()
{
	int num;

	std::cin >> num;

	int *data = new int[num];

	int *pre_process = new int[num+1];

	for(int i=0; i<num; i++)
		std::cin >> data[i];
	
	std::memset(pre_process, 0, sizeof(int)*(num+1));

	for(int i=1; i<=num; i++)
		pre_process[i] = pre_process[i-1]+data[i-1];

	//find min accumulate sum
	int min = 10000;
	int min_idx = -1;

	int ans = -9999;

	for(int i=1; i<=num; i++){
		if(min > pre_process[i-1]){
			min = pre_process[i-1];
			min_idx = i-1;
		}
	
		if(ans < pre_process[i]-min)
			ans = pre_process[i] - min;
	}

	std::cout << ans << "\n";

	delete[] data;

	delete[] pre_process;

	return 0;
}

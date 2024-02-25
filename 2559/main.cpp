#include <iostream>
#include <cstring>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int num, count;

	std::cin >> num >> count;

	int *data = new int[num+1];

	int *pre_process = new int[num+1];

	data[0] = 0;

	for(int i=1; i<= num; i++)
		std::cin >> data[i];

	std::memset(pre_process, 0, sizeof(int)*(num+1));

	for(int i=1; i<=num; i++)
		pre_process[i] = pre_process[i-1]+data[i];

	int max = -99999;

	for(int i=0; i<=num-count; i++){
		
		int temp = pre_process[i+count]-pre_process[i];
		
		if(max < temp)
			max = temp;
	}	

	std::cout << max << std::endl;

	return 0;
}

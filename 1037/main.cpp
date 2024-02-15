#include <iostream>
#include <algorithm>

int main()
{
	int num;

	std::cin >> num;

	int *arr = new int[num];

	for(int i=0; i< num; i++)
		std::cin >> arr[i];

	std::sort(arr, arr+num);

	std::cout << arr[0]*arr[num-1] << std::endl;

	return 0;
}

#include <iostream>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	long num, num_2, count;

	std::cin >> num >> num_2;

	long *data = new long[num];

	for(int i=0; i<num; i++){
		
		std::cin >> data[i];
	}

	std::sort(data, data+num);

	long init = 1;

	long end = data[num-1]+1;

	long long mid;

	long long ans = 0;

	while(init <= end){
	
		mid = (init+end)/2;

		count = 0;

		for(int i=0; i<num; i++){
			
			count = count + data[i]/mid;
		}

		if(count >= num_2){
			
			ans = std::max(ans, mid);

			init = mid+1;
		}

		else
			end = mid-1; 
	}

	std::cout << ans << "\n";

	delete[] data;

	return 0;
}

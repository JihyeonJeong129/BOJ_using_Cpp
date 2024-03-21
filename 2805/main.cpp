#include <iostream>
#include <algorithm>

int main()
{
	long n,m;

	std::cin >> n >> m;

	long *data = new long[n];

	for(int i=0; i<n; i++)
		std::cin >> data[i];
	
	std::sort(data, data+n);

	long max = data[n-1];

	long init = 1;

	long end = max;

	long long mid, tree_amount;

	long long ans = 0;

	while(true){
		
		if(init > end)
			break;

		mid = (init + end)/2;

		tree_amount = 0;

		for(int i=0; i<n; i++){
			if(data[i] > mid)
				tree_amount = tree_amount + data[i] - mid;
		}

		if(tree_amount < m)
			end = mid-1;

		else{
			ans = std::max(ans, mid);
			init = mid+1;
		}
	}

	std::cout << ans << "\n";

	delete[] data;

	return 0;
}

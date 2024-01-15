#include <iostream>
#include <map>
#include <unordered_map>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n,m;

	std::cin >> n;

	std::unordered_map<int, int> data;

/*
data input

data struct : {key, count}

count init value is 0, if insert same key value->count increase 1
*/


	for(int i = 0; i < n; i++){
		
		int num;

		std::cin >> num;

		if(data.find(num) == data.end()){
			data.insert({num,1});
		}

		else{
			data[num] = data[num]+1;
		}

	}

	std::cin >> m;

//data find and print count value
	for(int i = 0; i < m; i++){
		
		int num;

		std::cin >> num;

		if(data.find(num) != data.end()){
			
			std::cout << data[num] << " ";
		}

		else{
			std::cout << "0 ";
		}
	}

	return 0;
}

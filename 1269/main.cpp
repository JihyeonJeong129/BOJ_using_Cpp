#include <iostream>
#include <unordered_map>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int num_a, num_b;

	std::cin >> num_a >> num_b;

	std::unordered_map<int, int> map_a;

	std::unordered_map<int, int> map_b;

//data insertion
	for(int i = 0; i < num_a; i++){
		
		int temp;
	
		std::cin >> temp;

		map_a.insert({temp, i});
	}

	for(int i = 0; i < num_b; i++){
		
		int temp;
	
		std::cin >> temp;

		map_b.insert({temp, i});
	}

	int count_a = 0;
	int count_b = 0;
	
//find A-B -> count same element
	for(auto iter = map_a.begin(); iter != map_a.end(); iter++){
		
		if(map_b.find(iter->first) != map_b.end()){
			count_a++;
		}
	}

//find B-A -> count same element
	for(auto iter = map_b.begin(); iter != map_b.end(); iter++){
		
		if(map_a.find(iter->first) != map_a.end()){
			count_b++;
		}
	}

//print value(A-B)+(B-A)	
	std::cout << num_a+num_b-count_a-count_b << "\n";

	return 0;
}

#include <iostream>
#include <map>
#include <string>

int main()
{
	std::ios_base :: sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::map<std::string, int> data;

	int m,n;

	std::cin >> m >> n;

//data insertion
	for(int i = 0; i < m; i++){
		
		std::string input;
		std::cin >> input;
		data.insert({input, i});
	}

	int count = 0;
//data find
	for(int i = 0; i < n; i++){
		
		std::string find;
		std::cin >> find;
		
		if(data.find(find) != data.end()){
			count++;
		}
	}

	std::cout << count;

	return 0;
}

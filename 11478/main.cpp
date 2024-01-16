#include <iostream>
#include <unordered_map>
#include <string>

int main()
{
	std::string str;

	std::cin >> str;

	std::unordered_map<std::string, int> data;

//make all case of sub string
	for(int i = 0; i < str.length(); i++){
		
		for(int j = 1; j+i <= str.length(); j++){
			
			std::string sub_str = str.substr(i,j);

			if(data.find(sub_str) == data.end()){
				
				data.insert({sub_str,i});
			}			
		}
	}

//print map size(the count of elements)
	std::cout << data.size() << "\n";

	return 0;
}


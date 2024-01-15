#include <iostream>
#include <map>
#include <algorithm>

int main()
{
	std::ios_base :: sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int num;

	std::cin >> num;

	std::map<std::string, int> data;
//data input
	for(int i = 0; i < num; i++){
		
		std::string str1, str2; 

		std::cin >> str1 >> str2;

//compare string
		if(str2.compare("enter") == 0){
//enter
			data.insert({str1,i});
		}
//leave
		else{
			data.erase(str1);
		}
	}
//print data
	for(auto iter = data.rbegin(); iter != data.rend(); iter++){
		
		std::cout << iter->first << "\n";
	}

	return 0;
}

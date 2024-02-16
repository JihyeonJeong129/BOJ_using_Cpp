#include <iostream>
#include <map>
#include <string>

int main()
{
	int num;

	int count = 0;

	std::cin >> num;

	std::map<std::string, int> data;

	for(int i=0; i<num; i++){
		
		std::string str;
		std::cin >> str;

		if(str=="ENTER")
			data.clear();

		else{
			if(auto search = data.find(str); search != data.end()){
				continue;
			}

			else{
				data.insert({str,i});
				count++;
			}
		}
	}

	std::cout << count << std::endl;
	
	return 0;
}

#include <iostream>
#include <map>
#include <string>

int main()
{
	std::ios_base :: sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n,m;

	std::cin >> n >> m;

	std::map<std::string, int> data1;
	std::map<int, std::string> data2;

//data input
	for(int i = 0; i < n; i++){
		
		std::string str;

		std::cin >> str;

		data1.insert({str, i+1});

		data2.insert({i+1, str});
	}

	for(int i = 0; i < m; i++){
		
		std::string str;

		std::cin >> str;
//input data is str type
		if(atoi(str.c_str()) != 0 || (str.compare("0") == 0)){
			
			if(data2.find(atoi(str.c_str())) != data2.end()){
				std::cout << data2[atoi(str.c_str())] << "\n";
			}

			else{
				std::cout << "Not found" << "\n";
			}
		}
//input data is int type
		else{

			std::cout << data1[str] << "\n";
		}

	}

	return 0;
}

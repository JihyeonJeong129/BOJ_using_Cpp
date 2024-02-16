#include <iostream>
#include <map>
#include <string>

int main()
{
	std::ios_base :: sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int num;

	std::cin >> num;

	std::map <std::string, int> data;

	int count = 1;

	data.insert({"ChongChong",0});

	for(int i=1; i<=num; i++){

		std::string name1;

		std::string name2;

		std::cin >> name1 >> name2;

		if(auto search1 = data.find(name1); search1 != data.end()){
			if(auto search2 = data.find(name2); search2 != data.end())
				continue;

			else{
				data.insert({name2,i});
				count++;
			}
		}
		
		else{
			if(auto search2 = data.find(name2); search2 != data.end()){
				data.insert({name1,i});
				count++;
			}

			else
				continue;
		}
	}

	std::cout << count << std::endl;

	return 0;
}

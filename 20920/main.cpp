#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>

std::unordered_map<std::string, int> map;

bool compare(std::string str1, std::string str2)
{
	auto ele1 = map.find(str1);
	auto ele2 = map.find(str2);

	if(ele1->second > ele2->second)
		return true;
	else if(str1.length()>str2.length())
		return true;
	else if(str1 > str2)
		return true;
	else
		return false;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int count;

	int length;

	std::cin >> count >> length;

	for(int i=0; i<count; i++){
		
		std::string str;
		std::cin >> str;

		auto temp = map.find(str);

		if(str.length() >= length && temp->first.length())
			map.insert({str,1});
		
		else if(str.length() >= length){
			auto temp = map.find(str);
			temp->second++;
		}
	}

	std::string *str = new std::string[map.size()];

	int i=0;

	for(auto it = map.begin(); it != map.end(); it++){
		str[i] = it->first;
		i++;
	}

	std::sort(str, str+map.size(), compare);

	for(i=0; i<map.size(); i++){
		std::cout << str[i] << "\n";
	}

	return 0;
}

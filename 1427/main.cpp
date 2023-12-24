#include <iostream>
#include <algorithm>
#include <string>

bool desc(int a, int b){
    return a>b;
}

int main()
{

	std::string str;

    std::cin >> str;

    std::sort(str.begin(), str.end(), desc);

    for(int i = 0; i < str.length(); i ++){
        
		std::cout << str[i];
    }
    

    return 0;
}

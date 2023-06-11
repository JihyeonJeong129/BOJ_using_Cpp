#include <iostream>
#include <string>

int main()
{
    std::string str;

    getline(std::cin, str);

    int count = 1;

    for(int i = 0; i < str.size(); i++){
        
        if(str[i] == ' '){
            count = count + 1;
        }
    }

    std::cout << count;

    return 0;
}

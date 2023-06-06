#include <iostream>
#include <string>

int main()
{
    int count;

    std::cin >> count;

    for(int i = 0; i < count; i++){
        
        std::string str;

        std::cin >> str;

        std::cout << str[0] << str[str.size() - 1]  << std::endl;
    }
    
    return 0;
}

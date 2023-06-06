#include <iostream>
#include <string>

int main()
{
    std::string str;

    int index;

    std::cin >> str;
    std::cin >> index;
    
    std::cout << str[index - 1];

    return 0;
}

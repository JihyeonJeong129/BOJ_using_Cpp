#include <iostream>
#include <string>

int main()
{
    int count;
    int sum = 0;
    std::string str;

    std::cin >> count;
    std::cin >> str;

    for(int i = 0; i < count; i++){
        sum = sum + (str[i] - 48); 
    }

    std::cout << sum << std::endl;

    return 0;
}

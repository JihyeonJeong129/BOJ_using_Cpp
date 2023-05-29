#include<iostream>

int main()
{
    int input;

    std::cin >> input;

    while(input != 0){
        std::cout << "long ";
        input = input - 4;
    }

    std::cout << "int" << std::endl;

    return 0;
}

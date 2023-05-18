#include <iostream>

int main()
{
    int num1, num2;

    std::cin >> num1 >> num2;

    if(num1 > 0 && num2 > 0){
        std::cout << "1" << std::endl;
    }
    
    if(num1 > 0 && num2 < 0){
        std::cout << "4" << std::endl;
    }
    
    if(num1 < 0 && num2 > 0){
        std::cout << "2" << std::endl;
    }

    if(num1 < 0 && num2 < 0){
        std::cout << "3" << std::endl;
    }
    
    return 0;
}

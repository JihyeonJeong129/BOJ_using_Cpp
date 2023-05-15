#include <iostream>

int main(){
    
    int num1, num2;

    std::cin >> num1 >> num2;

    std::cout << num1 * (num2 % 10) << std::endl;
    std::cout << num1 * ((num2 % 100) - (num2 % 10)) / 10 << std::endl;
    std::cout << num1 * (num2 - (num2 % 100)) / 100 << std::endl;
    std::cout << num1 * num2 << std::endl;
}

#include <iostream>

int main(){
    
    int num1, num2;

    std::cin >> num1 >> num2;
    
    std::cout.precision(20); 
    // std::cout.precision(a) -> It expresses a significant number as many as a number.
    std::cout << (double)num1 / (double)num2;

    return 0;
}

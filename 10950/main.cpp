#include <iostream>

int main()
{
    int count;

    int num1, num2;

    std::cin >> count;

    for(int i = 0; i < count; i++){
        std::cin >> num1 >> num2;
        std::cout << num1 + num2 << std::endl;
    }

    return 0;
}

#include <iostream>

int main()
{
    while(1)
    {
        int num1, num2;

        std::cin >> num1 >> num2;

        if(num1 == 0 && num2 == 0){
            break;
        }

        if(num2 % num1 == 0){
            std::cout << "factor" << std::endl;
        }

        else if(num1 % num2 == 0){
            std::cout << "multiple" << std::endl;
        }

        else{
            std::cout << "neither" << std::endl;
        }
    }

    return 0;
}

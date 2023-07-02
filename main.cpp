#include <iostream>

int main()
{
    long num;

    int base;

    std::string result;

    std::cin >> num >> base;

    while(num != 0){
        
        if(num % base >= 10){

            char temp = (num % base) - 10 + 'A';

//          std::cout << temp << std::endl;

            result.insert(0, 1, temp);
        }

        else{

            char temp = (num % base) + '0';

//          std::cout << temp << std::endl;
            
            result.insert(0, 1, temp);
        }

        num = num / base;

    }

    std::cout << result;

    return 0;
}

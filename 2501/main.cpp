#include <iostream>

int main()
{
    int num, idx;

    std::cin >> num >> idx;

    int current = 0;

    int count = 0;
    
    while(num >= current){
        
        current = current + 1;

        if(num % current == 0){
            count++;
        }

        if(idx == count){
            std::cout << current << std::endl;
            return 0;
        }
        
    }

    std::cout << "0" << std::endl;

    return 0;
}


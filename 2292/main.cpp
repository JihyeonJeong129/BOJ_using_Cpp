#include <iostream>

int main()
{
    int num;

    std::cin >> num;

    int count = 1;

    while(num > 1){
        
        num = num - 6*count;

        count++;    
    
    }

    std::cout << count << std::endl;

    return 0;
}

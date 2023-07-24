#include <iostream>
#include <cmath>

int main()
{
    int count;

    std::cin >> count;

    int prime_num = count;

    int num;

    for(int i = 0; i < count; i++){

        std::cin >> num;

        if(num == 1){
            
            prime_num = prime_num - 1;
            continue;
        }

        for(int j = 2; j < num; j++){

            if(num % j == 0){
                
                prime_num = prime_num - 1;
                break;

            }
        }
    }

    std::cout << prime_num << std::endl;

    return 0;
}

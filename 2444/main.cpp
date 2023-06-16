#include <iostream>

int main()
{
    int num;

    std::cin >> num;

    for(int i=1; i <= num; i++){
        for(int j = 0; j<(num-i); j++){
            std::cout << " ";
        }
        
        for(int j = 0; j < (2*i-1); j++){
            std::cout << "*";
        }

        std::cout << "\n";
    }

    for(int i = (num-1); i >= 1; i--){
        for(int j = 0; j<(num-i); j++){
            std::cout << " ";
        }
        
        for(int j = 0; j < (2*i-1); j++){
            std::cout << "*";
        }

        std::cout << "\n";
    }

    return 0;
}

#include <iostream>

int main()
{
    int num1, num2, num3;

    int total;

    int max_val;

    std::cin >> num1 >> num2 >> num3;

    if(num1 == num2 && num2 == num3){
        total = 10000 + 1000 * num1;
    }

    else if(num1 == num2){
        total = 1000 + 100 * num1;
    }
    
    else if(num1 == num3){
        total = 1000 + 100 * num1;
    }

    else if(num3 == num2){
        total = 1000 + 100 * num2;
    }

    else{
        
        max_val = num1;

        if(max_val < num2){
            max_val = num2;
        }

        if(max_val < num3){
            max_val = num3;
        }

        total = max_val * 100;
    }

    std::cout << total << std::endl;
    
    return 0;
}

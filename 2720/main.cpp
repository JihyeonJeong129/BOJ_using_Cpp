#include <iostream>

int main()
{
    int count;

    std::cin >> count;

    for(int i = 0; i < count; i++){
        
        int quarter, dime, nickel, penny;
        
        int amount = 0;

        std::cin >> amount;

        if(amount > 1000)
            amount = amount % 1000;

        quarter = amount / 25;
        amount = amount % 25;

        dime = amount / 10;
        amount = amount % 10;
        
        nickel = amount / 5;
        amount = amount % 5;
        
        penny = amount;


        std::cout << quarter << " " << dime << " " << nickel << " " << penny << std::endl;
    }


    return 0;
}

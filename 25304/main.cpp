#include<iostream>

int main()
{
    int input_sum;
    int calcul_sum = 0;
    int count;

    std::cin >> input_sum;

    std::cin >> count;

    for(int i = 0; i < count; i++){
        
        int price,peace;
        
        std::cin >> price >> peace;

        calcul_sum = calcul_sum + (price*peace);
    }

    if(calcul_sum == input_sum){
        std::cout << "Yes" << std::endl;
    }

    else{
        std::cout << "No" << std::endl;
    }

    return 0;
}

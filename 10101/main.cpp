#include <iostream>

int main()
{
    int a1,a2,a3;

    std::cin >> a1 >> a2 >> a3;

    if(a1 + a2 + a3 > 180 || a1 + a2 + a3 < 180){
        std::cout << "Error" <<std::endl;
        return 0;
    }
    
    if(a1 + a2 + a3 == 180 && (a1 == a2 && a2 == a3)){
        std::cout << "Equilateral" <<std::endl;
        return 0;
    }
    
    else if(a1 + a2 + a3 == 180 && (a1 == a2 || a1 == a3 || a2 == a3)){
        std::cout << "Isosceles" <<std::endl;
        return 0;
    }
    
    else{
        std::cout << "Scalene" <<std::endl;
        return 0;
    }

    return 0;
}

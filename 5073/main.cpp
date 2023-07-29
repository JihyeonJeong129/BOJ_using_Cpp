#include <iostream>

int main()
{
    int a,b,c;

    while(1){

        std::cin >> a >> b >> c;

        int max = std::max(std::max(a,b),c);
        
        if(a == 0 && b == 0 && c == 0)
            break;

        else if((a + b + c - max) <= max){
            std::cout << "Invalid" <<std::endl;
        }

        else if(a == b && b == c){
            std::cout << "Equilateral" << std::endl;
        }

        else if(a == b || a == c || b == c){
            std::cout << "Isosceles" << std::endl;
        }

        else{
            std::cout << "Scalene" << std::endl;
        }


    }

    return 0;
}

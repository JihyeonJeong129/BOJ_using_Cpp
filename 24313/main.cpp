#include <iostream>

int main()
{
    int a1, a0;

    int c,n0;

    std::cin >> a1 >> a0;

    std::cin >> c >> n0;

    if(a1 <= c && (a1*n0+a0) <= c*n0){
        
        std::cout << "1";
    }

    else{
        
        std::cout << "0";
    }

    return 0;
}

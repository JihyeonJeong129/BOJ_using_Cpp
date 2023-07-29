#include <iostream>

int main()
{
    int a,b,c;

    std::cin >> a >> b >> c;

    int max = std::max(a,std::max(b,c));

    if(a + b + c - max <= max){
        std::cout << 2*(a + b + c - max) - 1 << std::endl;
    }

    else{
        std::cout << a + b + c << std::endl;        

    }

    return 0;
}

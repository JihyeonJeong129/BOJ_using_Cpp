
#include <iostream>

int main()
{
    int a,b,c,d,e,f;

    std::cin >> a >> b >> c >> d >> e >> f;

    int x,y;

    for(x = -999; x <= 999; x++){

        for(y = -999; y <= 999; y++){

            if(a*x+b*y == c && d*x+e*y==f){
                
                std::cout << x << " " << y;
                return 0;
            }
        }
    }

    std::cout << "Error" << std::endl;

    return 0;
}

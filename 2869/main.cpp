#include <iostream>

int main()
{
    int a,b,v;
    
    std::cin >> a >> b >> v;

    int day;

    day = (v-a)/(a-b);
    
    v = v - (a-b)*(day);

    while(1){

        v = v - a;

        day = day + 1;

        if(v <= 0){
            break;
        }

        else{
            v = v + b;
        }

    }

    std::cout << day << std::endl;

    return 0;
}

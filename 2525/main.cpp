#include <iostream>

int main()
{

    int hour,min;

    int inc_hour, inc_min;

    int input;

    std::cin >> hour >> min;

    std::cin >> input;


    inc_hour = input / 60;
    inc_min = input % 60;

    hour = hour + inc_hour;
    min = min + inc_min;

    if(min >= 60){
        hour = hour + (min/60);
        min = min % 60;
    }
    
    if(hour >= 24){
        hour = hour % 24;
    }

    std::cout << hour << " " << min;

    return 0;
}

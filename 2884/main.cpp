#include <iostream>

int main(){

    int hour, min;

    std::cin >> hour >> min;

    min = min - 45;

    if(min < 0){
        hour = hour - 1;
        min = min + 60;
    }

    if(hour < 0){
        hour = hour + 24;
    }

    std::cout << hour << " " << min;

    return 0;
}

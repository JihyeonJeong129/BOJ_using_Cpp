#include <iostream>

int main(){

    int num;

    std::cin >> num;

    if((num % 4 == 0) && (num % 100 != 0)){
        std::cout << "1" << std::endl;
    }

    else if(num % 400 == 0){
        std::cout << "1" << std::endl;
    }

    else{
        std::cout << "0" << std::endl;
    }

    return 0;
}

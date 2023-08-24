#include <iostream>

int main()
{
    int input;

    std::cin >> input;

    int min_count = 10000;

    int count;

    for(int i = 0; i <= (5000/5); i++){
        for(int j = 0; j <= (5000/3); j++){

            //std::cout << "i is " << i << " " << "j is " << j << std::endl;

            if((5*i+3*j) > input){
                break;
            }

            if((5*i+3*j) == input){
                
                count = i+j;  
            
                if(count < min_count){
                    min_count = count;
                }

            }

        //    std::cout << "i is " << i << " " << "j is " << j << std::endl;
            
        }
    }

    if(min_count == 10000){
        std::cout << "-1" << std::endl;
    }

    else{
        std::cout << min_count << std::endl;
    }

    return 0;
}

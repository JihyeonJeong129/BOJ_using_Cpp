#include <iostream>

int main()
{
    int mod_arr[10] = {};

    int count = 0;
    
    int input_num;


    std::cin >> input_num;

    mod_arr[0] = (input_num % 42);

    count = count + 1;

    for(int i = 1; i < 10; i++){
        
        std::cin >> input_num;

        for(int j = 0; j < count; j++){
            
            if((input_num % 42) == mod_arr[j]){
                goto JUMP;
            }
        }

        mod_arr[count++] = (input_num % 42); 
        
JUMP:
        continue;
    }

    std::cout << count << std::endl;

    return 0;
}

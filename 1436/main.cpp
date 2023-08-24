#include <iostream>
#include <string>

int main()
{
    int num;
    
    int count;

    std::cin >> count;

    num = 666;

    int temp_count = 0;

    std::string str;

    while(1){

        str = std::to_string(num);

        for(int i = 0; i < str.length(); i++){
            
            if(str[i] == '6'){
             
                int local_count = 0;

                i++;
                local_count ++;

                while(str[i] == '6'){
                    local_count++;
                    i++;
                }

                if(local_count >= 3){
                    temp_count ++;

//                    std::cout << num << " is find!!" << std::endl;
                }
            }
        }

        if(count == temp_count){
            
            std::cout << num << std::endl;
            break;
        }

        else{

            num++;
        }

    }

    return 0;
}

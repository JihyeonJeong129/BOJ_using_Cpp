#include <iostream>
#include <string>

int main()
{
    int count;

    std::cin >> count;

    int world_count = 0;

    for(int i = 0; i < count; i++){
        
        std::string str;
        std::cin >> str;

        int flag_arr[26] = {0, };

        
        
        for(int j = 0; j < str.size();){

            char comp = str[j];

            flag_arr[str[j] - 'a'] = 1;

            j = j + 1;

            while(true){
                
                if(comp != str[j]){
                    
                    break;
                }

                if(j >= str.size()){
                    
                    break;
                }

                j++;

            }

            if(flag_arr[str[j] - 'a'] == 1){
                
                break;
            }


            if((j == (str.size() - 1) && str[j] == comp) || j == (str.size())){
                world_count++;
                break;
            }

        }
    }

    std::cout << world_count << std::endl;

    return 0;
}

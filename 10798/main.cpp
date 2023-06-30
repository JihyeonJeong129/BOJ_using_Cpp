#include <iostream>
#include <string>

int main()
{
    std::string str[5];

    int length[5] = {0, };

    for(int i = 0; i < 5; i++){
        
        std::cin >> str[i];
        length[i] = str[i].size();
    }
        
    int max_val;

    max_val = length[0];

    for(int i = 1; i < 5; i++){
        
        if(max_val < length[i]){
            max_val = length[i];
        }
    }

    for(int i = 0; i < max_val; i ++){
        
        for(int j = 0; j < 5; j++){
            
            if(i > length[j]){
                continue;
            }

            else{
                std::cout << str[j][i];
            }
        }
    }

    return 0;
}

#include <iostream>
#include <string>

int main()
{
    std::string str[5];

    for(int i = 0; i < 5; i++){
        
        std::cin >> str[i];
    }
        
    for(int i = 0; i < 15; i ++){
        
        for(int j = 0; j < 5; j++){
            
            if(i < str[j].size()){
                
                std::cout << str[j][i];
            }
        }
    }

    return 0;
}

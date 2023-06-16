#include <iostream>

int main()
{
    std::string str;

    std::cin >> str;

    for(int i = 0; i < (str.size()/2); i++){
        
        if(str[i] != str[str.size()-i-1]){
            
            std::cout << "0";
            return 0;
        }
    }    

    std::cout << "1";

    return 0;
}

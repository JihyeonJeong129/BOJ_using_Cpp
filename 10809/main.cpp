#include <iostream>
#include <string>
#include <cstring>

int main()
{
    std::string str;

    std::cin >> str;

    char comp_char = 'a';

    for(int i = 0; i < 26; i++){
        
        int j;

        for(j = 0; j < str.size(); j++){
            
            if(str[j] == comp_char){
            
                std::cout << j << " ";
                goto END;
            }
        }

        std::cout << "-1 ";

END:
        comp_char = comp_char + 1;

}

    return 0;
}

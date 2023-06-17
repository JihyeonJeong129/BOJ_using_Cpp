#include <iostream>
#include <string>

int main()
{
    std::string str;

    std::cin >> str;

    int count = 0;

    for(int i = 0; i < str.size();){
        
        if(str[i] == 'c' && str[i+1] == '='){
            count++;
            i = i + 2;
        }

        else if(str[i] == 'c' && str[i+1] == '-'){
            count++;
            i = i + 2;
        }
        
        else if(str[i] == 'd' && str[i+1] == 'z' && str[i+2] == '='){
            count++;
            i = i + 3;
        }
        
        else if(str[i] == 'd' && str[i+1] == '-'){
            count++;
            i = i + 2;
        }
        
        else if(str[i] == 'l' && str[i+1] == 'j'){
            count++;
            i = i + 2;
        }
        
        else if(str[i] == 'n' && str[i+1] == 'j'){
            count++;
            i = i + 2;
        }
        
        else if(str[i] == 's' && str[i+1] == '='){
            count++;
            i = i + 2;
        }
        
        else if(str[i] == 'z' && str[i+1] == '='){
            count++;
            i = i + 2;
        }

        else{
            count++;
            i = i + 1;
        }
    }

    std::cout << count << std::endl;

    return 0;
}

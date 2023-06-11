#include <iostream>
#include <string>
#include <cstring>

int main()
{
    std::string str;

    getline(std::cin, str);
    
    
    char *cp_str = new char[str.size()];

    strcpy(cp_str, str.c_str());

   //if string is empty
    if(strcmp(cp_str, " ") == 0){
        std::cout << 0;
        return 0;
    }


    int count = 1;

    char *ptr = strtok(cp_str, " "); 
    
    while(strtok(NULL, " ")){
        count = count + 1;
    }

    std::cout << count;

    delete cp_str;

    return 0;
}

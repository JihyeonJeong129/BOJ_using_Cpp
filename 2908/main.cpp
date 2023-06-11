#include <iostream>
#include <string>

int main()
{
    std::string str1,str2;

    std::cin >> str1 >> str2;

    for(int i = 0; i < (str1.size())/2; i++){
        
        char temp;
        
        temp = str1[i];

        str1[i] = str1[str1.size() - i-1];
        
        str1[str1.size() - i-1] = temp;
    }

    for(int i = 0; i < (str2.size())/2; i++){
        
        char temp;
        
        temp = str2[i];

        str2[i] = str2[str1.size() - i-1];
        
        str2[str1.size() - i-1] = temp;
    }

    int num1 = std::stoi(str1);
    int num2 = std::stoi(str2);

    if(num1 > num2){
        std::cout << num1;
    }

    else{
        std::cout << num2;
    }

    return 0;
}

#include <iostream>
#include <cmath>

int main()
{
    std::string num;
    
    int base;

    std::cin >> num >> base;

    long result = 0;

    int j = 0;

    for(int i = (num.size()-1); i >= 0; i--){
        
        if(num[i] >= 'A'){
            result = result + (num[i]-'A'+10) * pow(base, j);
        }

        else{
            result = result + (num[i]-'0') * pow(base, j);
        }

        j++;
    }

    std::cout << result;


    return 0;
}

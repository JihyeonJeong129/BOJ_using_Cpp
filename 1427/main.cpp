#include <iostream>
#include <algorithm>
#include <string>

bool desc(int a, int b){
    return a>b;
}

int main()
{
    char num[10];

    long long num_temp;

    std::cin >> num_temp;

    num = to_string(num_temp);

    std::sort(num, num+10, desc);

    for(int i = 0; i < 10; i ++){
        std::cout << num[i] << std::endl;
    }
    

    return 0;
}

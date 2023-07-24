#include <iostream>

int main()
{
    int num,cp_num;

    std::cin >> num;

    cp_num = num;

    int count = 0;

    if(num == 1){
        
        std::cout << "1/1" << std::endl;
        return 0;
    }

    for(int i = 1; num > i; i ++){
        
        num = num - i;

        count = count +1;
    }

//    std::cout << count << " " << num << std::endl;

    if(count % 2 == 0){
        
        std::cout << count - num + 2 << "/" << num << std::endl;
    }

    else{
        
        std::cout << num << "/" << count - num + 2 << std::endl;
    }
    
    return 0;
}

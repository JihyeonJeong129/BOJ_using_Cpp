#include <iostream>
#include <string>

int main()
{
    int num;

    std::cin >> num;

    std::string num_str = std::to_string(num);

    int count = 0;

    while(1){

        if(count >= num){
            break;
        }

        int check = 0;

        std::string count_str = std::to_string(count);

        for(int i = 0; i < count_str.length(); i++){

            check = check + (int)count_str[i] - '0';
        }

//        std::cout << count << std::endl;

        check = check + count;

        if(check == num){
            std::cout << count << std::endl;
            return 0;
        }

        count = count + 1;

    }

    std::cout << "0" << std::endl;

    return 0;
}

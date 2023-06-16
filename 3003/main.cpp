#include <iostream>

#define INPUT_SIZE 6

int main()
{
    int sol_arr[INPUT_SIZE] = {1, 1, 2, 2, 2, 8};

    int input_arr[INPUT_SIZE];

    for(int i = 0; i < INPUT_SIZE; i++){
        std::cin >> input_arr[i];
    }

    for(int i = 0; i < INPUT_SIZE; i++){
        std::cout << (sol_arr[i] - input_arr[i]) << " ";
    }

    return 0;
}

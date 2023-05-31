#include <iostream>

int main()
{
    int bucket_num, attempt_num;

    int init, end, num;

    std::cin >> bucket_num >> attempt_num;

    int *arr = new int[bucket_num]();

    for(int i = 0; i < attempt_num; i++){
        
        std::cin >> init >> end >> num;

        for(int j = (init - 1); j <= (end - 1); j++){
            
            arr[j] = num;
        }
    }

    for(int i = 0; i < bucket_num; i++){
        
        std::cout << arr[i] << " ";
    }

    delete arr;

    return 0;
}

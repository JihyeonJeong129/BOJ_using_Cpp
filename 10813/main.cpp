#include <iostream>

int main()
{
    int bucket_num;
    int count;

    std::cin >> bucket_num >> count;

    int *bucket = new int[bucket_num];
    
    for(int i = 0; i < bucket_num; i++){
        bucket[i] = (i+1);
    }

    for(int i = 0; i < count; i++){
        
        int temp;

        int num1,num2;

        std::cin >> num1 >> num2;

        temp = bucket[num1-1];
        bucket[num1-1] = bucket[num2-1];
        bucket[num2-1] = temp;
    }

    for(int i = 0; i < bucket_num; i++){
        std::cout << bucket[i] << " ";
    }
    
    return 0;
}

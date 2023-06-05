#include <iostream>

int main()
{
    int bucket_num, count;

    std::cin >> bucket_num >> count;

    int *buckets = new int[bucket_num];

//Initialize
    
    for(int i = 0; i < bucket_num; i++){
        
        buckets[i] = (i+1);
    }

//Initialize end

    for(int i = 0; i < count; i++){
        
        int num1, num2;

        std::cin >> num1 >> num2;

        //creat new memory space
        int *temp = new int[num2 - num1 + 1];

        for(int j = 0; j < (num2 - num1 + 1); j++){
            temp[j] = buckets[num2 - j - 1];
        }

        for(int j = 0; j < (num2 - num1 + 1); j++){
            buckets[num1 + j - 1] = temp[j];
        }

        delete temp;
    }

    for(int i = 0; i < bucket_num; i++){
        std::cout << buckets[i] << " "; 
    }

    delete buckets;

    return 0;
}

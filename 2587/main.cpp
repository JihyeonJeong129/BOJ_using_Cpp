#include <iostream>

int main()
{
    int arr[5];

    int mid = 0;

    float avg = 0;

//Input
    for(int i = 0; i < 5; i++){
        
        std::cin >> arr[i];

        avg = avg + (float)arr[i]/5;
    }

//Insertion Sorting
    for(int i = 1; i < 5; i++){

        int temp = arr[i];

        int j;

        for(j = i-1; j >= 0 && temp < arr[j]; j--){
            
            arr[j+1] = arr[j];
        }

        arr[j+1] = temp;

    }

    mid = arr[2];

//Output print
    std::cout << (int)avg << std::endl;
    std::cout << mid << std::endl;

    return 0;
}

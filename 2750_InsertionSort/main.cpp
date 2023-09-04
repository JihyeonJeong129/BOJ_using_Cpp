#include <iostream>

int main()
{
    int n;

    std::cin >> n;

//Data Input
    int *arr = new int[n];

    for(int i = 0; i < n; i++){
        
        std::cin >> arr[i];
    }

//Insertion Sort Start
    for(int i = 1; i < n; i++){
        
        int j;

        int temp = arr[i];

        for(j = i - 1; temp < arr[j] && j >= 0; j--){
            
            arr[j+1] = arr[j]; // shifting
        }

        arr[j+1] = temp;
    
    }

//Print Sorting result
    for(int i = 0; i < n; i++){
        
        std::cout << arr[i] << std::endl;
    }

    return 0;
}

#include <iostream>

int main()
{
    int n,k;

    std::cin >> n >> k;

    int *arr = new int[n];

//Data Input
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }

//Insertion Sort
    
    for(int i = 1; i < n; i++){
        
        int j,temp;

        temp = arr[i];

        for(j = i-1; j >= 0 && arr[j] > temp; j--){
            arr[j+1] = arr[j];
        }

        arr[j+1] = temp;
    }

//Printing Result
    std::cout << arr[n-k] << std::endl; 

    return 0;
}

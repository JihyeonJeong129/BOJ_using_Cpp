#include <iostream>

int main()
{
    int n;

    std::cin >> n;

    int *arr = new int[n];

//input
    
    for(int i = 0; i < n; i++){

        std::cin >> arr[i];
    }

//bubble sort

    for(int i = n-1 ; i > 0; i--){
        
        for(int j = 0; j < i; j++){
            
            if(arr[j] > arr[j+1]){
                
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

//print array

    for(int i = 0; i < n; i++){

        std::cout << arr[i] << std::endl;
    }
    
    return 0;
}

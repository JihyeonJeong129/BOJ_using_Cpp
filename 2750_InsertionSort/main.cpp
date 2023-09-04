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
        
        if(arr[i-1] > arr[i]){
            
            int temp;
            
            int j = i;

            temp = arr[i];

            do{
                j--;  
            } while((arr[i] < arr[j]) && j>0);

            if(arr[j] < arr[i]){
                j = j + 1;
            }


            for(int k = i; k >= j; k--){
                
                arr[k] = arr[k-1];
            }

            arr[j] = temp;
         }
    }

//Print Sorting result
    for(int i = 0; i < n; i++){
        
        std::cout << arr[i] << std::endl;
    }

    return 0;
}

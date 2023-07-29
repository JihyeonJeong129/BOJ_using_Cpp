#include <iostream>

int main()
{
    int num;

    std::cin >> num;

    if(num == 1){
        std::cout << "0" << std::endl;
        return 0;
    }

    int **arr = new int* [num];

    for(int i = 0; i < num; i++)
        arr[i] = new int[2];


    for(int i = 0; i < num; i++){
        
        std::cin >> arr[i][0] >> arr[i][1];
    }

    int x_max, x_min;
    int y_max, y_min;

    
    x_max = arr[0][0];
    
    y_max = arr[0][1];

    x_min = arr[0][0];
    
    y_min = arr[0][1];
    

    for(int i = 1; i < num; i++){
        
        if(x_max < arr[i][0]){
            
            x_max = arr[i][0];
        }
        
         if(x_min > arr[i][0]){
            
            x_min = arr[i][0];
        }

        if(y_max < arr[i][1]){
            
            y_max = arr[i][1];
        }
        
         if(y_min > arr[i][1]){
            
            y_min = arr[i][1];
        }

    }

    std::cout << (x_max - x_min) * (y_max - y_min) << std::endl;
    
    return 0;
}

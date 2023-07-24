#include <iostream>

int main()
{

    while(1){

        int num;

        std::cin >> num;

        if(num == -1){
            break;
        }

        int *arr = new int[10000];

        int idx = 0;
        
        for(int i = 1; i < num; i ++){
            
            if(num % i == 0){
                
                arr[idx] = i;

                idx = idx + 1;
            }
        }

        int sum = 0;

        
        for(int i = 0; i < idx; i ++){
           
           sum = sum + arr[i];
        }

        if(sum == num){
            
            std::cout << num << " = ";

            for(int i = 0; i < idx - 1; i ++){

                std::cout << arr[i] << " + ";
            }

            std::cout << arr[idx - 1] << std::endl;
        }

        else{

            std::cout << num << " is NOT perfect." << std::endl;
        }

    }



    return 0;
}

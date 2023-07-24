#include <iostream>
#include <cmath>

int main()
{
    int m,n;

    int sum = 0;

    int min_prime = 10000;

    std::cin >> m >> n;

    if(m == 1){
        
        m = 2;
    }

    for(int i = m; i <= n; i++){
    
        for(int j = 2; j <= sqrt(i); j++){
            
            if(i % j == 0){
                goto END;
            }
        }

        if(min_prime > i){
            
            min_prime = i;
        }

        sum = sum + i;
END:    
        continue;
     }

     if(sum == 0){

         std::cout << "-1" << std::endl;
     }

    else{
                
         std::cout << sum << std::endl;

         std::cout << min_prime << std::endl;
    }
    
    return 0;
}

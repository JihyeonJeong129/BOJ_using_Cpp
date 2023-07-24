#include <iostream>
#include <cmath>

int main()
{
    int n;

    std::cin >> n;
    
    for(int i = 2; i <= n; i++){
        
        while(n % i == 0){
            
            n = n/i;
            std::cout << i << std::endl;

        }
    }

    return 0;
}

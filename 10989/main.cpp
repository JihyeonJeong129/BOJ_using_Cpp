#include <iostream>
#include <cstring>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(NULL);

    long n;

    std::cin >> n;

    int count[10001] = {0, };

    for(int i = 0; i < n; i++){
        
        int num;

        std::cin >> num;

        count[num]++;
    }

    for(int i = 0; i <= 10000; i++){

        for(int j = 0; j < count[i]; j++){
            
            std::cout << i << "\n";
        }        
    }

    return 0;
}

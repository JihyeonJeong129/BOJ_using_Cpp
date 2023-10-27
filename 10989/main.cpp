#include <iostream>
#include <cstring>

int main()
{
    long n;

    std::cin >> n;

    int *arr = new int[n];
    int *count = new int[n];

    memset(count, 0, sizeof(int) * n);

    for(int i = 0; i < n; i++){
        
        std::cin >> arr[i];

        count[arr[i]]++;

    }

    for(int i = 0; i < n; i++){

        for(int j = 0; j < count[i]; j++){
            
            std::cout << i << "\n";
        }        
    }

    return 0;
}

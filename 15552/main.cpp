#include <iostream>

int main()
{
    int count, num1, num2;
    
    std::cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    std::cin >> count;

    for(int i = 0; i < count; i++){
        std::cin >> num1 >> num2;
        std::cout << num1 + num2 << "\n";
    }

    return 0;
}

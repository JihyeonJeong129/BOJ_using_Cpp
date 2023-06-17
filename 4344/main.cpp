#include <iostream>
#include <iomanip>

int main()
{
    int total_count, count;

    std::cin >> total_count;

    for(int i = 0; i < total_count; i++){
        
        std::cin >> count;

        int sum = 0;
        double avg = 0;
        
        int *arr = new int[count];

        for(int j = 0; j < count; j++){
            std::cin >> arr[j];
            sum = sum + arr[j];
        }

        avg = sum / count;

        int local_count = 0;

        for(int j = 0; j < count; j++){
            if(arr[j] > avg){
                local_count++;
            }
        }
        
        std::cout.precision(5);
        std::cout.setf(std::ios::showpoint);

        std::cout << (double)local_count / (double)count * 100 << "%" << std::endl;

        delete arr;

    }

    return 0;
}

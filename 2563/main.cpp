#include <iostream>

int main()
{
    int count;

    int area_count = 0;

    int paper[101][101];

    std::cin >> count;

    //array_reset

    for(int i = 0; i < 101; i++){

        for(int j = 0; j < 101; j++){
                
            paper[i][j] = 0;
        }
    }

    for(int i = 0; i < count; i++){
        
        int num1, num2;

        std::cin >> num1 >> num2;

        for(int j = 0; j < 10; j++){
            
            for(int k = 0; k < 10; k++){
                
                paper[num1 + j][num2 + k]++;
            }
        }
    }

    for(int i = 0; i < 101; i++){

        for(int j = 0; j < 101; j++){
            
            if(paper[i][j] != 0){
                area_count++;
            }
        }
    }

    std::cout << area_count;

    return 0;
}

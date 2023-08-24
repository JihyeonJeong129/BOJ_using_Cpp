#include <iostream>

int main()
{
    int m,n;

    std::cin >> m >> n;

    char board[51][51];

    for(int i = 0; i < m; i++){
        
        for(int j = 0; j < n; j++){
            
            std::cin >> board[i][j];
        }
    }

    for(int i = 0; i < m; i++){
        
        for(int j = 0; j < n; j++){
            
            if(board[i][j] == 'B'){
                
                board[i][j] = 0;
            }

            else{

                board[i][j] = 1;
            }
        }
    }

    int count_min = 10000;

    char temp_board[8][8];

    for(int i = 0; i <= m-8; i++){

        for(int j = 0; j <= n-8; j++){
            
            for(int k = 0; k < 8; k++){

                for(int l = 0; l < 8; l++){

                    temp_board[k][l] = board[i+k][j+l];
                }
            }        
            
            char base_point = temp_board[0][0];

            int count = 0;

            for(int k = 0; k < 8; k++){
                
                char temp_bp;

                if(k%2 == 0){
                    temp_bp = base_point;
                }

                else{
                    temp_bp = !base_point;
                }

                for(int l = 0; l < 8; l++){
                    
                    if(l%2 == 0 && (temp_board[k][l] != temp_bp)){
                        count = count + 1;
                    }
         
                    if(l%2 == 1 && (temp_board[k][l] == temp_bp)){
                        count = count + 1;
                    }

                }
            }

            if(count >= 32){
                
                count = 64 - count;
            }

            if(count_min > count){
                
                count_min = count;

//                std::cout << "Count min is " << count_min << std::endl;
            }

//            std::cout << "count is " << count << std::endl;

        }
    }

    std::cout << count_min << std::endl;

    return 0;
}

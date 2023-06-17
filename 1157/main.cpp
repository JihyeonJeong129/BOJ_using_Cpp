#include <iostream>
#include <string>

int main()
{
    std::string str;

    std::cin >> str;

    int arr[26] = {0, };

//count
    for(int i = 0; i < str.size(); i++){
        
        if(str[i] >= 'a'){
            arr[str[i] - 'a']++;
        }

        else{
            arr[str[i] - 'A']++;
        }
    }

    
//find max value
    
    int max_index;
    int max_val = -1;
    int count;

    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
        
        if(arr[i] > max_val){
            
            count = 0;
            max_val = arr[i];
            max_index = i;
        }

        else if(arr[i] == max_val && arr[i] != 0){
            
            count = count + 1;
        }
    }

//check depulication 

    if(count > 0){
        std::cout << "?";
    }

    else{
        
        char result = max_index + 'A';

        std::cout << result;
    }
        
    return 0;
}

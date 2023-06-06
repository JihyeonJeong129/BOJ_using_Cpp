#include <iostream>

int main()
{
    int count;

    std::cin >> count;

    double *score = new double[count];
    
    for(int i = 0; i < count; i++){
        
        std::cin >> score[i];
    }


    double max_score = score[0];
    
    int max_index = 0;

    //find max value
    for(int i = 1; i < count; i++){
        
        if(max_score < score[i]){
            
            max_index = i;
            max_score = score[i];
        }
    }

    //score transform
    for(int i = 0; i < count; i++){
        
        score[i] = (score[i] / max_score) * 100;    
    }


    double score_avg = 0;

    //calculating avrage score
    for(int i = 0; i < count; i++){
        
        score_avg = score_avg + (score[i] / count);    
    }

    //print avrage value
    std::cout << score_avg << std::endl;

    
    delete score;

    return 0;
}

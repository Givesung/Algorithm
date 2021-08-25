#include <iostream>

int avg_score()
{
    int sum = 0, score;

    for(int i=0; i<5; ++i){
        std::cin >> score;
        sum += score;
    }

    return sum / 5
}

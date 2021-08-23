#include <iostream>

double avg(int n)
{
    double sum, score[1000], max = INT_MIN;
    double average = 0;

    for(int i=0; i<n; ++i){
        std::cin >> score[i];
        if(max < score[i]) max = score[i];
    }

    for(int i=0; i<n; ++i){
        score[i] = score[i] / max * 100;
        sum += score[i];
    }

    average = double(sum) / n;

    return average;
}

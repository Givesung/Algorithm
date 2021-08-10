#include <vector>
#include <random>
#include <time.h>

int majority1(const std::vector<int> &n)
{
    int N = n.size();
    int majority=-1, majorityCount=0;
    for(int i=0; i<N; ++i){
        int V = n[i], count=0;
        for(int j=0; j<N; ++j)
            if(n[j] == V)
                ++count;
    
        if(count > majorityCount){
            majorityCount = count;
            majority = V;
        }
    }
        
    return majority;
}
        
int majority2(const std::vector<int> &n)
{
    int N = n.size();
    std::vector<int> count(101, 0);
    for(int i=0; i<N; ++i)
        count[n[i]]++;

    int majority=0;
    for(int i=1; i<=100; ++i)
        if(count[i] > count[majority])
            majority = i;

    return majority;
}

void setNumbers(std::vector<int> &n)
{
    int N = n.size();
    for(int i=0; i<N; ++i)
        n[i] = rand()%100;
}

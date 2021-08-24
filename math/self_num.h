#include <iostream>

int return_non_self_num(int n)
{
    int tmp = 0, sum = 0;

    while(n > 0){
        tmp = n % 10;
        sum += tmp;
        n /= 10;
    }

    return sum;
}

void self_num(int &n)
{
    const int MAX_SIZE_ARRAY = 10000;
    
    bool selfNum[MAX_SIZE_ARRAY + 1];

    for(int i=1; i<=n; ++i){
        int sum = i + return_self_num(i);
        selfNum[sum] = true;
    }

    for(int i=1; i<=n; ++i){
        if(selfNum[i] != true)
            std::cout<< i << std::endl;
    }
}

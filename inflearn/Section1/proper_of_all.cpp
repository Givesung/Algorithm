#include <iostream>
#include <cstdio>

#define MAX_ARR_SIZE 50001

int main()
{
    int num;
    int result[MAX_ARR_SIZE];
    scanf("%d", &num);

    for(int i=1; i<=num; ++i)
        for(int j=1; j<=i; ++j)
            if(j==1 || i%j==0) result[i]++;
    
    for(int i=1; i<=num; ++i){
        std::cout << result[i];
    }

    return 0;
}

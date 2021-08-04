#include <iostream>

int digit_num(int x)
{
    int tmp, sum=0;
    while(x > 0){
        tmp  = x%10;
        sum += tmp;
        x    = x/10;
    }
    return sum;
}

int main()
{
    int n, num, max=INT_MIN, sum;
    printf("수의 개수를 입력(예: 5): ");
    scanf("%d", &n);

    for(int i=1; i<=n; ++i){
        printf("계산할 자릿수 입력(예: 123): ");
        scanf("%d", &num);
        sum = digit_num(num);
        printf("자릿수의 합: %2d\n", sum);
        if(sum > max)
            max = sum;
    }

    printf("자릿수 합의 최대값: %2d", max);
}


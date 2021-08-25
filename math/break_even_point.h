#include <iostream>

int break_even_point(int &A, int &B, int &C)
{
    int count = 1, total = 0;

    do{
        if(A > total){ 
            A += B;
            total += C;
            ++count;
        }
    }while(A > total);

    return count;
}

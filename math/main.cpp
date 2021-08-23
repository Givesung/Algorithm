#include "average.h"

#include <cstdio>
#include <cstdlib>
#include <cmath>

int main()
{
    int num;
    double result;
    std::cin >> num;
    result = avg(num);
        
    std::cout << result;
    return 0;
}

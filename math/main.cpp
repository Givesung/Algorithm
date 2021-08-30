#include "prime_num2.h"

#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cmath>

int main()
{
    int num, a, b, c;
    std::cin >> a >> b;

    num = prime_num(a, b);
    std::cout << num << std::endl;
    return 0;
}

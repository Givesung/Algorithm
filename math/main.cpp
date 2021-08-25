#include "break_even_point.h"

#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cmath>

int main()
{
    int num, a, b, c;
    std::cin >> a >> b >> c;
    num = break_even_point(a, b, c);
    std::cout << num << std::endl;
    return 0;
}

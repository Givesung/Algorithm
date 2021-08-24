#include <iostream>

void prime_num(int &n)
{
    for(int i=1; i<=n; ++i)
        if(i % 2 != 0)
            std::cout << i << std::endl;
}

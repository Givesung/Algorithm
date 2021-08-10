#include <iostream>
#include "numMajority.h"

int main()
{
    std::vector<int> n;
    n.resize(100);

    setNumbers(n);

    int N = n.size();

    for(int i=0; i<N; ++i){
        std::cout << n[i] << " ";
        if(i % 10 == 0)
            std::cout << std::endl;
    }
    std::cout << std::endl;

    int major1 = majority1(n);
    int major2 = majority2(n);

    std::cout << "major1: " << major1 << std::endl;
    std::cout << "major2: " << major2 << std::endl;

    return 0;
}

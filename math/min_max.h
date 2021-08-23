#include <iostream>

void min_max(int &n)
{
    int min = INT_MAX, max = INT_MIN;
    int num;

    for(int i=1; i<=n; ++i){
        std::cin >> num;
        if(num < min)
            min = num;
        else if(num > max)
            max = num;
    }

    std::cout << min << " " << max << std::endl;
}

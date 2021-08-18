#include <iostream>
#include <vector>

void less_than(int &n, const int &x)
{
    std::vector<int> nums;
    for(int i=0; i<n; ++i){
        std::cin >> n;
        nums.push_back(n);
    }

    for(int i=0; i<n; ++i)
        std::cout << nums[i] << std::endl;
}

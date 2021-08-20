#include <iostream>
#include <vector>

void add_mult_line(int &n)
{
    int first_num, second_num;
    std::vector<int> nums;

    for(int i=1; i<=n; ++i){
        std::cin >> first_num >> second_num;
        nums.push_back(first_num + second_num);
    }

    for(int i=0; i<nums.size(); ++i)
        std::cout << nums[i] << std::endl;
}


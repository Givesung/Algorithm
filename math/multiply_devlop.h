#include <iostream>

void mult(int &first_num, int &second_num)
{
    int tmp;
    int total = first_num * second_num;

    while(second_num > 0){
        tmp = second_num % 10;
        std::cout << first_num * tmp << std::endl;
        second_num /= 10;
    }
    std::cout << total << std::endl;
}

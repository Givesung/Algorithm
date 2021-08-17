#include <iostream>

template<typename T>
void fourOperations(T &first_num, T &second_num)
{
    std::cout << first_num + second_num << std::endl;
    std::cout << first_num - second_num << std::endl;
    std::cout << first_num * second_num << std::endl;
    std::cout << first_num / second_num << std::endl;
    std::cout << first_num % second_num << std::endl;
}

#include <iostream>

void nums()
{
    int A, B, C;
    int tmp, array_size = 0, total = 0;
    int bitmap[10] = {};
    array_size = sizeof(bitmap) / sizeof(int);

    std::cin >> A >> B >> C;
    total += A * B * C;

    while(total > 0){
        tmp = total % 10;
        bitmap[tmp]++;
        total /= 10;
    }

    for(int i=0; i<array_size; ++i)
        std::cout << bitmap[i] << std::endl;
}

#include <iostream>

void acmHotel(int& t, int& h, int&w, int&n)
{
    int floor, room_num;

    for(int i=0; i<t; ++i){
        floor = n % h;
        room_num = ceil(n / h);

        if(floor == 0)
            printf("%d%02d\n", h, room_num);
        else
            printf("%d%02d\n", floor, room_num);
    }

    return 0;
}

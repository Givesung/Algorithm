#include <iostream>

void alarm(int &hour, int &minute)
{
    int minute, hour;
    
    if(hour > 23 || minute > 59) return;

    minute -= 45;
    if(minute < 0){
        minute += 60;
        --hour;
        if(hour < 0){
            hour += 24;
        }
    }
    std::cout << hour << " " << minute << std::endl;
}

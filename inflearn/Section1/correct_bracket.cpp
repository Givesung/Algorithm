#include <iostream>

int main()
{
    int count;
    char *str; 

    scanf("%s", &str);

    for(int i=0; str[i] != '\0'; ++i){
        if(str == 40)      {count++;}
        else if(str == 41) {count--;}
        if(count<0) break;
    }

    if(count==0) std::cout << "YES" << std::endl;
    else         std::cout << "NO"  << std::endl;

    return 0;
}

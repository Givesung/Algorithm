int main(int &n)
{
    int range = 1, result = 1, tmp = 1;

    while(true){
        if(range >= n)
            break;
        tmp = 6 * (result++);
        range += tmp;
    }

    return result;
}

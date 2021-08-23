void add_circle(int &num)
{
    int count = 0, tmp0 = 0, tmp1 = 0, digit_sum = 0;
    int sum;

    while(num > 0){
        tmp0 = num % 10;
        tmp1 = (num % 10) * 10;
        digit_sum += tmp0;
        num /= 10;
        ++count;
    }

    sum = tmp1 + digit_sum;
    std::cout << sun;
}

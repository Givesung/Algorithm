#include<iostream>

int main()
{
	int divisor, sum = 0;

	std::cin >> divisor;

	for(int i = 1; i <= divisor; ++i){
		if(divisor % i == 0 && i != divisor){	
			sum += i;
		}
	}
	std::cout << sum << std::endl;

	return 0;
}

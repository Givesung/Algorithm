#include<iostream>

int main()
{
	int a, b, sum = 0;
	std::cin >> a >> b;

	for(; a <= b; a++)
		sum += a;

	std::cout << sum << std::endl;

	return 0;
}


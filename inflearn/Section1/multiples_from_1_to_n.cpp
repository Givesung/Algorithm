#include<iostream>

int main()
{
	int n, mul, sum = 0;

	std::cin >> n >> mul;

	for(int i = 0; i <= n; ++i)
	{
		if(i % mul == 0)
		{
			sum += i;
		}
	}

	std::cout << sum << std::endl;

	return 0;
}


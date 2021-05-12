#include<iostream>

int main()
{
	int age, year;
	char arr_RNN[20];

	std::cin >> arr_RNN;

	if(arr_RNN[7] == '1' || arr_RNN[7] == '2') year = 1900+((arr_RNN[0] - 48) * 10 + (arr_RNN[1] - 48));
	else year = 2000 + ((arr_RNN[0] - 48) * 10 + (arr_RNN[1] - 48));
	
	age = 2021 - year + 1;
	std::cout << age;

	if(arr_RNN[7] == '1' || arr_RNN[7] == '3')
		std::cout << 'M' << std::endl;
	else
		std::cout << 'W' << std::endl;

	return 0;
}

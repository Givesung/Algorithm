#include<iostream>

int main()
{
	int N, age,min = INT_MAX, max = INT_MIN;

	std::cin >> N;

	for(int i = 0; i < N; ++i){
		std::cin >> age;

		if(age < min)
			min = age;
		else if(age > max)
			max = age;
	}

	std::cout << max - min << std::endl;

	return 0;
}
	

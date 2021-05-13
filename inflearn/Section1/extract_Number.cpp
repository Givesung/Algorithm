#include<iostream>

int main()
{
	int res = 0, cnt = 0;
	char strArr[256];

	std::cin >> strArr;

	for(int i = 0; strArr[i] != '\0'; ++i){
		if(strArr[i] >= 48 && a [i] <= 57){
			res = res * 10 (strArr[i] - 48);
		}
	}

	std::cout << res << std::endl;

	for(i = 1; i <= res; ++i){
		if(res%u == 0) cnt++;
	}

	std::cout << cnt << std::endl;
	
	return 0;
}

#include<iostream>
#include<string>

int main()
{
	char word[255], dupWord[255];
	int p = 0;

	std::cin >> word;

	for(int i = 0; word[i] != '\0'; i++){
		if(word[i] != ' '){
			if(word[i] >= 65 && word[i] <= 90){
				dupWord[p++] = word[i] + 32;
				std::cout << dupWord[p] << std::endl;
			}
			else dupWord[p++] = word[i];
		}
	}
	dupWord[p] = '\0';

	std::cout << dupWord << std::endl;
	return 0;
}

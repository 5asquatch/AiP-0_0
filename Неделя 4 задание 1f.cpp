﻿#include <iostream> 
#include <time.h>
int main()
{
	int arr[50];
	int i;
	srand(time(0));
	for (i = 0; i < 50; i++) {
		arr[i] = (rand() % 51) - 30; 
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
	std::getchar();
	std::getchar();
	return 0;
}
﻿#include <iostream>
#include <time.h>



const int N = 10;
int main()
{

	int arr[N], even[N], max, min, n1 = 0, n2 = 0, j = 0;
	srand(time(0));
	for (int i = 0; i < N; i++) {
		arr[i] = 0 + rand() % 20;
		std::cout << arr[i] << " ";
	}
	max = arr[0];
	min = arr[0];
	std::cout << "\n Index of chetnih elements: " << "\n";
	for (int i = 0; i < N; i++)
	{
		if (arr[i] % 2 == 0) {
			even[j] = i;
			j += 1;
			if (min > arr[i]) {
				min = arr[i];
				n2 = i + 1;
			}
		}
	}
	for (int i = 0; i < j; i++) std::cout << even[i] << " ";
	std::cout << "\n index Min: " << n2 << "\n";
	std::cout << "Otvet: " << min << "\n";
	std::getchar();
	std::getchar();
	return 0;
}

#include <iostream>
#include <stdlib.h>
#include <locale>
#include <time.h>
#include <cmath>


int main()
{
	const int N = 20;
	int arr[N];
	srand(time(0));

	for (int i = 0; i < N; i++)
		arr[i] = -10 + rand() % N;
	for (int i = 0; i < N; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
	int max_number = arr[0];

	for (int i = 1; i < N; i++)
		if (max_number < abs(arr[i]))
			max_number = abs(arr[i]);
	std::cout << "Max element of array = " << max_number << "\n";

	for (int i = 1; i < N; i++)
		if (max_number > abs(arr[i]))
			max_number = abs(arr[i]);
	std::cout << "Min element of array = " << max_number << "\n";
	std::cin.get();
	std::cin.get();
	return 0;
}
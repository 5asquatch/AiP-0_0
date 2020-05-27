#include <iostream>     
#include <stdlib.h>
#include <time.h>

int main()
{
	int arr[15], sum = 0, k = 9;
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		arr[i] = 0 + rand() % 15;
		std::cout << arr[i] << " ";
		if (arr[i] > k)
			sum += arr[i];
	}
	std::cout << "summ = " << sum << "\n";


	return 0;


}
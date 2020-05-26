#include <iostream>     
#include <stdlib.h>
#include <time.h>


int main()
{
	
	int arr[15], c = 0;

	srand(time(0));
	for (int i = 0; i < 15; i++)
	{
		arr[i] = 0 + rand() % 15;
		std::cout << arr[i] << " ";
		if (arr[i] > 0) c++;
	}
	std::cout << "Count of numbers > 0 : " << c << "\n";
	return 0;


}

#include <iostream>
#include <fstream>

int main()
{
	std::fstream f;
	int h;
	char a;
	std::cout << "1. Get from file.\n";
	std::cout << "2. Enter the number\n";
	std::cin >> a;
	switch (a) {
	case '1':
		f.open("N2Z1.txt", std::ios::in);
		f >> h;
		for (int i = 1; i < h + 1; i++) {
			for (int j = 0; j < i; j++)
				std::cout << 0;
			std::cout << std::endl;
		}
		f.close();
		break;
	case '2':
		std::cout << "Enter count of strings : ";
		std::cin >> h;
		for (int i = 1; i < h + 1; i++) {
			for (int j = 0; j < i; j++)
				std::cout << 0;
			std::cout << std::endl;
		}
		break;
	default:
		std::cout << "ERROR!\n";
		break;
	}
	system("PAUSE");
	return 0;
}
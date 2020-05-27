#include <iostream>
#include <math.h>
#include <fstream>

float x, y;
char a;
std::fstream f;

void Write2Key() {
	std::cout << "Enter the x: ";
	std::cin >> x;
	if (x > 1) {
		y = 3 * x - 7;
		std::cout << "Answer: " << y << "\n";

	}
	else if (x < 1) {
		y = 3 * abs(x + 2) - 7;
		std::cout << "Answer: " << y << "\n";
	}
	else if (x = 1) {
		y = 3;
		std::cout << "Answer: " << y << "\n";
	}
}
void Write2File() {
	f.open("N34D.txt", std::ios::in);
	f >> x;
	if (x > 1) {
		y = 3 * x - 7;
		std::cout << "Answer: " << y << "\n";

	}
	else if (x < 1) {
		y = 3 * abs(x + 2) - 7;
		std::cout << "Answer: " << y << "\n";
	}
	else if (x = 1) {
		y = 3;
		std::cout << "Answer: " << y << "\n";
	}
	f.close();
}

int main()
{
	std::cout << "1) Get from file\n";
	std::cout << "2) Enter the number\n";
	std::cout << "Answer: ";
	std::cin >> a;
	switch (a) {
	case '1':
		Write2File();
		break;
	case '2':
		Write2Key();
		break;
	default:
		std::cout << "Error!\n";
		break;
	}
	std::getchar();
	std::getchar();
	return 0;
}

#include <iostream>
#include <iomanip> 
#include <math.h>  
#include <fstream>


std::fstream f;
float dx, xs, xf;
const float eps = 0.000001;
char a;
float y, x;
void Write2Key() {
	std::cout << "from : ";
	std::cin >> xs;
	std::cout << "to : ";
	std::cin >> xf;
	std::cout << "Select the step : ";
	std::cin >> dx;
	std::cout << "\tx\t\ty" << std::endl;
	std::cout.precision(5);
	x = xs;
	while (x < xf) {
		if (fabs(x - 2) < eps)
			std::cout << "\t" << x << "\t\t /0" << std::endl;
		else {
			y = pow(-2 * x, 2) + 3 * x - 1;
			std::cout << "\t" << x << "\t\t" << y << std::endl;
		}
		x += dx;
	}
}
void Write2File() {
	f.open("N32C.txt", std::ios::in);
	f >> xs;
	f >> xf;
	f >> dx;
	std::cout << "\tx\t\ty" << std::endl;
	std::cout.precision(5);
	x = xs;
	while (x < xf) {
		if (fabs(x - 2) < eps)
			std::cout << "\t" << x << "\t\t /0" << std::endl;
		else {
			y = pow(-2 * x, 2) + 3 * x - 1;
			std::cout << "\t" << x << "\t\t" << y << std::endl;
		}
		x += dx;
	}
	f.close();
}

int main()
{
	std::cout << "1) Get from file\n";
	std::cout << "2) Enter the number\n";
	std::cout << "Ответ : ";
	std::cin >> a;
	switch (a) {
	case '1':
		Write2File();
		break;
	case '2':
		Write2Key();
		break;
	default:
		std::cout << "ERROR!\n";
		break;
	}
	std::getchar();
	std::getchar();
	return 0;
}
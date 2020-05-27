#include <iostream>
#include <iomanip> 
#include <math.h>  
#include <fstream>


int main()
{
	std::fstream f;
	float dx, xs, xf;
	const float eps = 0.000001;
	char a;
	float y, x;
	std::cout << "1) Get from file\n";
	std::cout << "2) Enter the number\n";
	std::cin >> a;
	switch (a) {
	case '1':
		f.open("N32n.txt", std::ios::in);
		f >> xs;
		f >> xf;
		f >> dx;
		std::cout << "\tx\t\ty" << std::endl;
		std::cout.precision(5);
		x = xs;
		while (x < xf) {
			if (fabs(x - 2) < eps)
				std::cout << "\t" << x << "\t\t " << std::endl;
			else {
				y = sqrt(2 + 3 * x) + 72 * x + tan(4 * x + 31);
				std::cout << "\t" << x << "\t\t" << y << std::endl;
			}
			x += dx;
		}
		f.close();
		break;
	case '2':

		std::cout << "from : ";
		std::cin >> xs;
		std::cout << "to : ";
		std::cin >> xf;
		std::cout << "Enter the step : ";
		std::cin >> dx;
		std::cout << "\tx\t\ty" << std::endl;
		std::cout.precision(5);
		x = xs;
		while (x < xf) {
			if (fabs(x - 2) < eps)
				std::cout << "\t" << x << "\t\t" << std::endl;
			else {
				y = sqrt(2 + 3 * x) + 72 * x + tan(4 * x + 31);
				std::cout << "\t" << x << "\t\t" << y << std::endl;
			}
			x += dx;
		}
		break;
	default:
		std::cout << "ERROR!\n";
		break;
	}
	system("PAUSE");
	return 0;
}
#include<iostream>


int main() {
	int num1, num2, num3;
	int min, max;
	std::cout << "Enter first number: ";
	std::cin >> num1;
	min = num1;
	std::cout << "Enter second number: ";
	std::cin >> num2;
	max = num2;
	if (num2 < min) min = num2;
	else if (num2 > min) max = num2;
	std::cout << "Enter third number : ";
	std::cin >> num3;
	if (num3 < min) min = num3;
	else if (num3 > min) max = num3;
	std::cout << "Answer : " << "\n";
	std::cout << "Min-3 : " << min - 3 << "\n";
	std::cout << "Max+5 : " << max + 5 << "\n";
	system("PAUSE");
	return 0;
}
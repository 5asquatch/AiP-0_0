
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int num1, num2, num3, max, min, a, b;
	cout << "Vvedite 3 numbers " << endl;
	cin >> num1;
	cin >> num2;
	cin >> num3;
	if (num1 > num2)
	{
		max = num1;
		min = num2;
	}
	else
	{
		max = num2;
		min = num1;
	}
	if (max < num3)
		max = num3;
	a = max + 5;
	b = min + 3;
	cout << "Max number+5 : " << a << endl;
	cout << "Min number+3 : " << b << endl;
}



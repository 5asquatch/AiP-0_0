#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float a, c;
	int b;
	cout << "Vvedite number:";
	cin >> a;
	cout << "___Select translations direction:___\n";
	for (int i = 0; i < 2; i++)
	{
		cout << "1.bit" << "\t2.byte" << "\t3.Kbyte" << "\t4.Mbyte" << endl;
	}
	cin >> b;
	switch (b)
	{
	
	case 12:
		c = a / 8;
		cout << "Otvet= " << c << " byte";
		break;
	case 13:
		c = a / (8 * pow(2, 10));
		cout << "Otvet= " << c << " Kbyte";
		break;
	case 14:
		c = a / (8 * pow(2, 20));
		cout << "Otvet= " << c << " Mbyte";
		break;

	case 21:
		c = a * 8;
		cout << "Otvet= " << c << " bit";
		break;
	case 23:
		c = a / (pow(2, 10));
		cout << "Otvet= " << c << " Kbyte";
		break;
	case 24:
		c = a / (pow(2, 20));
		cout << "Otvet= " << c << " Mbyte";
		break;
	
	case 31:
		c = a * pow(2, 20) * 8;
		cout << "Otvet= " << c << " bit";
		break;
	case 32:
		c = a * pow(2, 10);
		cout << "Otvet= " << c << " byte";
		break;
	case 34:
		c = a / (pow(2, 10));
		cout << "Otvet= " << c << " Mbyte";
		break;
		
	case 41:
		c = a * pow(2, 20) * 8;
		cout << "Otvet= " << c << " bit";
		break;
	case 42:
		c = a * pow(2, 20);
		cout << "Otvet= " << c << " byte";
		break;
	case 43:
		c = a * pow(2, 10);
		cout << "Otvet= " << c << " Kbyte";
		break;
	}
}


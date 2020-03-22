
#include "pch.h"
#include <iostream>
using namespace std;


int dlina1;
int dlina2;
int ploshad;

int main(){
	cout << "Vvedite parametri ellipsa" << endl;
	cout << "dlina bolshei poluosi" << endl;
	cin >> dlina1;
	cout << "dlina men'shei poluosi" << endl;
	cin >> dlina2;
	cout << "ploshad ellispsa ravna" << endl;
	ploshad = 3.14 * dlina1 * dlina2;
	cout << ploshad;

}



#include <iostream>
#include <cmath>
#include <conio.h>

/*	Source by Programiz
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

using namespace std;

int main() {
	double result;
	int x = 25, exp = 5;

	result = ldexp(x, exp);
	cout << "ldexp(x, exp) = " << result << endl;

	_getch();
	return 0;
}
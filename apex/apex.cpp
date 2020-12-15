#include <iostream>

using namespace std;

int main()
{
	double a, b, c;
	cout << "Enter a, b, c" << endl;
	cin >> a >> b >> c;
	while (a == 0) {
		cout << "Wrong input. Enter a" << endl;
		cin >> a;
	}
	double y, x;
	x = -b / (2 * a);
	y = a * x * x + b * x + c;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	system("pause");
}
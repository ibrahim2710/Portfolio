#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double a;
	double b;
	double c;
	double D;
	double x;
	double y;
	cout << "This program was written to assist you solving your polynomials. Enter your numbers in the form ax^2+bx+c=0. Enter a, b, c";
	cin >> a;
	cin >> b;
	cin >> c;
	D = (b*b) - (4 * a*c);
	cout << "The Discriminant is " << D << endl;
	if (D>0) {
		cout << "This equation has two real solutions" << endl;
	}
	else if (D == 0) {
		cout << "This equation has one real solution" << endl;
	}
	else if (D<0) {
		cout << "This equation has two imaginary solutions" << endl;
	}
	if (D >= 0) {
		x = ((-b) + sqrt((b*b) - (4 * a*c))) / (2 * a);
		y = ((-b) - sqrt((b*b) - (4 * a*c))) / (2 * a);
		cout << "The first solution is = " << x << endl;
		cout << "The second solution is = " << y << endl;
	}
	return 0;
}
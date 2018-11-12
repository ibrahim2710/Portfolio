#include<iostream>
#include<math.h>
using namespace std;
int main() {
	cout << "This program was written to help the user solve the definite integral, f(x)= 1/x + 3*sin(x)-2" << endl;
	double intervals;
	cout << "Enter the number of interval " << endl;
	cin >> intervals;
	double rightvalue;
	cout << "Enter the right interval value " << endl;
	cin >> rightvalue;
	double leftvalue;
	cout << "Enter the left interval value " << endl;
	cin >> leftvalue;
	double deltaX;
	deltaX = (rightvalue - leftvalue) / intervals;
	cout << "The width of the rectangles is " << deltaX << endl;
	double Left_Reimann;
	double Right_Reimann;
	double Midpoint_Reimann;
	double TrapozidRule2;
	double Simpsons_Rule;
	double f1;
	f1 = 0;
	double f2;
	f2 = 0;
	double f3;
	f3 = 0;
	double f4;
	f4 = 0;
	double RIGHT;
	RIGHT = 0;
	double LEFT;
	LEFT = 0;
	double MIDDLE;
	MIDDLE = 0;
	double TRAP;
	TRAP = 0;
	for (double D = leftvalue; D <= rightvalue - deltaX; D = D + deltaX)
	{
		f1 = 1 / D + 3 * sin(D) - 2;
		LEFT += f1;
	}
	Left_Reimann = deltaX * LEFT;
	//Right_Reimann
	for (double D = leftvalue + deltaX; D <= rightvalue; D += deltaX)
	{
		f2 = (1 / D) + 3 * sin(D) - 2;
		RIGHT += f2;
	}
	Right_Reimann = deltaX * RIGHT;
	//Midpoint_Reimann
	for (double D = leftvalue; D <= rightvalue - deltaX; D += deltaX)
	{
		double middle;
		middle = (.5)*(2 * D + deltaX);
		f3 = (1 / middle) + 3 * sin(middle) - 2;
		MIDDLE += f3;
	}


	Midpoint_Reimann = deltaX * MIDDLE;
	//Trapozid_Rule
	for (double D = leftvalue + deltaX; D <= (rightvalue - deltaX); D += deltaX)

	{
		f4 = (1 / D) + 3 * sin(D) - 2;
		TRAP += f4;
	}

	double A1;
	A1 = (1 / leftvalue) + 3 * sin(leftvalue) - 2;
	double A2;
	A2 = (1 / rightvalue) + 3 * sin(rightvalue) - 2;
	TRAP = A1 + A2 + (2 * TRAP);
	TrapozidRule2 = .5*deltaX*TRAP;
	//Simpsons_Rule
	Simpsons_Rule = ((2 * Midpoint_Reimann) + TrapozidRule2)*(1.0 / 3);
	cout << "The approximation of the given integral using a Right Reimann Sum is " << Right_Reimann << endl;
	cout << "The approximation of the given integral using a Left Reimann Sum is " << Left_Reimann << endl;
	cout << "The approximation of the given integral using a Midpoint Reimann Sum is " << Midpoint_Reimann << endl;
	cout << "The approximation of the given integral using The Trapozid Rule is " << TrapozidRule2 << endl;
	cout << "Simpson Technique approximation is " << Simpsons_Rule << endl;

	return 0;
}

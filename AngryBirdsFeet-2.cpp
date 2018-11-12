#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	const double a = -32;
	const double PI = 3.14159;
	double theta;
	double phi;
	double BirdHeight;
	double Height;
	double Distance;
	double velocityX;
	double velocityY;
	double FVY;
	double FVX;
	double Angle;
	double FinalBirdVelocity;
	double v;
	double t;
	cout << "Enter the velocity in ft/s: ";
	cin >> v;
	cout << "Enter the horizontal target distance in feet: ";
	cin >> Distance;
	cout << "Enter theta in degrees: ";
	cin >> theta;
	cout << "Enter the height of structure in feet: ";
	cin >> Height;
	phi = theta * (PI / 180);
	velocityX = v * cos(phi);
	velocityY = v * sin(phi);
	FVX = velocityX;
	t = (Distance / velocityX);
	BirdHeight = (velocityY*t) + ((1 / 2)*(a)*(t*t));
	FVY = sqrt(fabs((velocityY*velocityY) + ((2 * a)*(Height - 5))));     
	FinalBirdVelocity = sqrt((FVX*FVX) + (FVY*FVY));
	Angle = atan(FVY / FVX)*(180 / PI);
	cout << "The final velcoity is: " << FinalBirdVelocity << "ft/s" << endl;
	cout << "The time to reach strucutre is:" << t << "s" << endl;
	cout << "The dirrection is: " << Angle << "degrees" << endl;
	cout << "The height of the bird is: " << BirdHeight << "ft" << endl;
	if (BirdHeight <= Height) {
		cout << "The Bird has hit the Tower" << endl;
	}
	else {
		cout << "The Bird has not hit the tower" << endl;
	}
	return 0;
}
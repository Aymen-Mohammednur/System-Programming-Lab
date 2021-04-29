#include <stdio.h>

void main()
{
	double gravity = -9.81; // Earth's gravity in m/s^2
	double initialVelocity = 0.0;
	double fallingTime = 10.0;
	double initialPosition = 0.0;
	double finalPosition = 0.5 * (gravity * (fallingTime * fallingTime));
	printf("The object's position after %f seconds is %f meters\n", fallingTime, finalPosition);
}

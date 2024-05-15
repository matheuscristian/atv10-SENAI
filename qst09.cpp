#include <stdio.h>
#include <math.h>

int main() {
	float radius, diameter, circumference, area;
	scanf("%f", &radius);
	
	area          = 3.14 * powf(radius, 2);
	diameter      = radius*2;
	circumference = 3.14 * diameter;
	
	printf("Radius: %f\n", radius);
	printf("Diameter: %f\n", diameter);
	printf("Circumference: %f\n", circumference);
	printf("Area: %f\n", area);
	
	return 0;
}

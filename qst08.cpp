#include <stdio.h>

int main() {
	float f_temp;
	scanf("%f", &f_temp);
	
	float c_temp = (f_temp - 32) / 9;
	
	printf("F: %.2f - C: %.2f/n", f_temp, c_temp);
	
	return 0;
}

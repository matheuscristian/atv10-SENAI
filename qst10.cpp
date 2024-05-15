#include <stdio.h>

void swap(int *x, int *z) {
	int y = *x;
	
	*x = *z;
	*z = y;
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	
	printf("Antigo: %d %d\n", a, b);
	
	swap(&a, &b);
	
	printf("Novo: %d %d\n", a, b);
	
	return 0;
}

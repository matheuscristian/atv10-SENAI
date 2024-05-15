#include <stdio.h>

int main() {
	float score = 0, total = 0;

	for (int i = 0; i < 4; i++) {
		printf("Digite a %d nota do aluno: ", i+1);
		scanf("%f", &score);

		total += score;
	}

	printf("A média é: %f", total / 4);

	return 0;
}

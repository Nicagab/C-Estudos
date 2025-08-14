#include <stdio.h>

int main () {
	float imc, peso, altura;
	system("cls");
	printf("Digite peso e altura: ");
	scanf("%f %f", &peso, &altura);
	imc = peso/(altura*altura);
	printf("\nIMC: %.2f", imc);
	return 0;
}

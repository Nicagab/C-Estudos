#include <stdio.h>

int main(){
	float n;
	printf("Digite um numero: ");
	scanf("%f", &n);
	printf("\nO modulo de n e: %f", n<0 ? -n:n);
	return 0;
}

#include <stdio.h>

int main(){
	int n;
	printf("Digite um numero: ");
	scanf("%d", &n);
	printf("%d e um numero %s", n, n%2 ? "Impar" : "Par");
	return 0;
}

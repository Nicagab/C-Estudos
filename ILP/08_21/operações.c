#include <stdio.h>

int main(){
	float x,y;
	char op;
	printf("\nDigite a expressao: ");
	scanf("%f %c %f", &x, &op, &y);
	switch (op) {
		case '+': printf("\n valor = %.2f", x+y); break;
		case '-': printf("\n valor = %.2f", x-y); break;
		case '*': printf("\n valor = %.2f", x*y); break;
		case '/': printf("\n valor = %.2f", x/y); break;
		default: printf("\n Operador invalido %c", op); break;
	}
	return 0;
}

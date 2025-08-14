#include <stdio.h>

int main (){
	float c, f;
	printf("Digite a temperatura em Fahrenheit: ");
	scanf("%f", &f);
	system("cls");
	c = (f-32)*5/9;
	printf("\nTemperatura convertida em Celsius: %.2f", c);
	return 0;
}

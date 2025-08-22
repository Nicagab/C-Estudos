#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c, delta, x1, x2;
    printf("\nDigite os coeficientes A,B e C: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a==0){
        printf("\nCoeficiente A invalido");
    } else {
        delta = pow(b, 2)-4*a*c;
        if (delta<0) {
            printf("Nao ha raizes reais");
        } else {
            x1 = ((-b)+sqrt(delta))/(2*a);
            x2 = ((-b)-sqrt(delta))/(2*a);
            printf("\nRaizes encontradas:\nx1: %f\nx2:  %f", x1, x2);
        }
    }
    return 0;
}
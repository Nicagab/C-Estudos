#include <stdio.h>
#include <math.h>
#define PI 3.1415

int main () {
    float raio, area, perim;
    printf("Raio do circulo: ");
    scanf("%f", &raio);
    area = PI*pow(raio, 2);
    perim = 2*PI*raio;
    system("cls");
    printf("\nArea: %.2f\nPerimetro: %.2f", area, perim);
    return 0;
}
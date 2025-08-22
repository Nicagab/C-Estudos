#include <stdio.h>

int main(){
    int n;
    printf("\nUltimo digito da placa: ");
    scanf("%d", &n);
    switch (n) {
        case 1: case 2: printf("\nDia rodizio: Segunda-feira"); break;
        case 3: case 4: printf("\nDia rodizio: Terça-feira"); break; 
        case 5: case 6: printf("\nDia rodizio: Quarta-feira"); break;
        case 7: case 8: printf("\nDia rodizio: Quinta-feira"); break; 
        case 9: case 0: printf("\nDia rodizio: Sexta-feira"); break;
        default: printf("\nNumero invalido");   
    }
    return 0;
}
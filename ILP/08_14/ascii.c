#include <stdio.h>

int main(){
    char caracter;
    int ascii;
    printf("Digite um caracter: ");
    scanf("%c", &caracter);
    ascii = caracter;
    system("cls");
    printf("\nDecimal: %d\nOctal: %o\nHexadecimal: %x", ascii, ascii, ascii);
    return 0;
}
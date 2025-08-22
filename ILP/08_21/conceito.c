#include <stdio.h>

int main(){
    int f;
    float m;
    printf("\nDigite numero de faltas e sua media: ");
    scanf("%d %f", &f, &m);
    if (f>5) {
        printf("\nConceito final: F");
    } else if(m<6){
        printf("\nConceito final: C");
    } else if(m<7.5){
        printf("\nConceito final: B");
    } else if(m<9){
        printf("\nConceito final: A");
    } else {
        printf("\nConceito final: E");
    }
    return 0;
}
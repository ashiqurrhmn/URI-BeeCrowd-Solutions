#include <stdio.h>

int main() {

    float A, B, C, P, AREA;
    scanf("%f %f %f", &A, &B, &C);

    P= A+B+C;
    AREA= 0.5*(A+B)*C;

    if((A+B)>C && (B+C)>A && (A+C)>B){
        printf("Perimetro = %.1f\n", P);
    }else{
        printf("Area = %.1f\n", AREA);
    }

    return 0;
}

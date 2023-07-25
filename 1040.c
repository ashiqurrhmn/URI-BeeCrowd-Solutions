#include<stdio.h>
int main()
{
    float a, b, c, d, e;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    float avg = (a*2 + b*3 + c*4 + d)/10.0;
    printf("Media: %.1f\n", avg);
    if(avg>=7.0)
        printf("Aluno aprovado.\n");
    else if(avg<5.0)
        printf("Aluno reprovado.\n");
    else if(avg>=5.0 && avg<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%f", &e);
    printf("Nota do exame: %0.1f\n", e);
    float avg2= (avg+e)/2;
    if(avg2>=5.0)
        printf("Aluno aprovado.\n");
    else
        printf("Aluno reprovado.\n");
    printf("Media final: %0.1f\n", avg2);
    }



    return 0;
}

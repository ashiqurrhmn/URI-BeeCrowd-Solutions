#include<stdio.h>
int main()
{
    double N;
    scanf("%lf", &N);
    int l=N*100;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", l/10000);
    l=l%10000;
    printf("%d nota(s) de R$ 50.00\n", l/5000);
    l=l%5000;
    printf("%d nota(s) de R$ 20.00\n", l/2000);
    l=l%2000;
    printf("%d nota(s) de R$ 10.00\n", l/1000);
    l=l%1000;
    printf("%d nota(s) de R$ 5.00\n", l/500);
    l=l%500;
    printf("%d nota(s) de R$ 2.00\n", l/200);
    l=l%200;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", l/100);
    l=l%100;
    printf("%d moeda(s) de R$ 0.50\n", l/50);
    l=l%50;
    printf("%d moeda(s) de R$ 0.25\n", l/25);
    l=l%25;
    printf("%d moeda(s) de R$ 0.10\n", l/10);
    l=l%10;
    printf("%d moeda(s) de R$ 0.05\n", l/5);
    l=l%5;
    printf("%d moeda(s) de R$ 0.01\n", l);


    return 0;
}

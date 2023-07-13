#include<stdio.h>
int main()
{
    int a, n, sum1=0, sum2=0, sum3=0, sum, i;
    double c, r, s;
    char b, p='%';
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %c", &a, &b);

        if(b=='C')
            sum1+=a;
        if(b=='R')
            sum2+=a;
        if(b=='S')
            sum3+=a;
    }
    sum=sum1+sum2+sum3;
    c=(sum1*100.00)/sum;
    r=(sum2*100.00)/sum;
    s=(sum3*100.00)/sum;

    printf("Total: %d cobaias\n", sum);
    printf("Total de coelhos: %d\n", sum1);
    printf("Total de ratos: %d\n", sum2);
    printf("Total de sapos: %d\n", sum3);
    printf("Percentual de coelhos: %.2lf %c\n", c, p);
    printf("Percentual de ratos: %.2lf %c\n", r, p);
    printf("Percentual de sapos: %.2lf %c\n", s, p);


    return 0;
}

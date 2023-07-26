#include<stdio.h>
int main()
{
    float n, t;
    scanf("%f", &n);
    if(n<=2000.00)
    {
        printf("Isento\n");
    }
    else if(n>=2000.01 && n<=3000.00)
    {
        t=(n-2000)*0.08;
        printf("R$ %0.2f\n", t);
    }
    else if(n>=3000.01 && n<=4500.00)
    {
        t= (n-3000)*0.18 + 1000*0.08;
        printf("R$ %0.2f\n", t);
    }
    else if(n>4500.00)
    {
        t= (n-4500)*0.28 + 1500*0.18 + 1000*0.08;
        printf("R$ %0.2f\n", t);
    }

    return 0;
}

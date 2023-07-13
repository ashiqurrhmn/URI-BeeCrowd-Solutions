#include<stdio.h>
int main()
{
    int n, a, i, c=0, e=0 ,d=0 , f=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &a);
        if(a%2==0)
            c++;
        if(a%3==0)
            d++;
        if(a%4==0)
            e++;
        if(a%5==0)
            f++;
    }
    printf("%d Multiplo(s) de 2\n", c);
    printf("%d Multiplo(s) de 3\n", d);
    printf("%d Multiplo(s) de 4\n", e);
    printf("%d Multiplo(s) de 5\n", f);

    return 0;
}

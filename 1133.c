#include<stdio.h>
int main()
{
    int a, b, max, min, i;
    scanf("%d %d", &a, &b);
    if(a>b)
    {
        max=a;
        min=b;
    }else
    {
        max=b;
        min=a;
    }
    for(i=min+1; i<max; i++)
    {
        if(i%5==2 || i%5==3)
            printf("%d\n", i);
    }

    return 0;
}

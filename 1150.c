#include<stdio.h>
int main()
{
    int a, b, c=1, sum=0, i;
    scanf("%d %d", &a, &b);
    while(b<=a)
    {
        scanf("%d", &b);
    }
    for(i=a; i<=b; i++)
    {
        sum+=i;
        if(sum>b)
            break;
        c++;
    }
    printf("%d\n", c);

    return 0;
}

#include<stdio.h>
int main()
{
    int n, x, y, i, j, a;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %d", &x, &y);
        int sum=0;
        if(x%2==0)
        {
            a = x+1;
            for(j=1; j<=y; j++)
            {
                sum = sum + a;
                a+=2;
            }
            printf("%d\n", sum);
        }
        else
        {
            for(j=1; j<=y; j++)
            {
                sum = sum + x;
                x+=2;
            }
            printf("%d\n", sum);
        }
    }

    return 0;
}

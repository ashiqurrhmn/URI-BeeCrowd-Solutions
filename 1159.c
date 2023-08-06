#include<stdio.h>
int main()
{
    int n, i, sum, a;
    while(1)
    {
        scanf("%d", &n);
        sum = 0;
        if(n==0)
            break;
        else if(n%2==0)
        {
            for(i = 1; i<=5; i++)
            {
                sum = sum + n;
                n+=2;
            }
            printf("%d\n", sum);
        }
        else
        {
            a = n+1;
            for(i = 1; i<=5; i++)
            {
                sum = sum + a;
                a+=2;
            }
            printf("%d\n", sum);
        }
    }

    return 0;
}

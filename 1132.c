#include<stdio.h>
int main()
{
    int x, y, sum=0, a;
    scanf("%d %d", &x, &y);
    if(x>y)
    {
        int i=y;
        while(i<=x)
        {
            a=i%13;
            if(a!=0)
            {
                sum+=i;
            }

            i++;
        }
        printf("%d\n", sum);
    }
    else if(y>x)
    {
        int i=x;
        while(i<=y)
        {
            a=i%13;
            if(a!=0)
            {
                sum+=i;
            }

            i++;
        }
        printf("%d\n", sum);
    }


    return 0;
}

#include<stdio.h>
int main()
{
    int n, i, a, b, temp;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        if(b<a)
        {
            temp = a;
            a = b;
            b = temp;
        }
        int sum = 0 ;
        for(int j = a+1; j<b; j++)
        {
            if(j%2!=0)
            {
                sum += j;
            }
        }
        printf("%d\n", sum);
    }


    return 0;
}

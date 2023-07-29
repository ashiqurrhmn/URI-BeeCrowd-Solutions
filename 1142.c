#include<stdio.h>
int main()
{
    int n, x=1, i, j;
    scanf("%d", &n);
    for ( i = 1; i<=n; i++)
    {
        for(j = x; j<=x+2; j++)
        {
            printf("%d ", j);
        }
        printf("PUM\n");
        x+=4;

    }

    return 0;
}

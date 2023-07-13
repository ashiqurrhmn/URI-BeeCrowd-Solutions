#include<stdio.h>
int main()
{
    int n, i;
    float a, b;
    float div;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%f %f", &a, &b);
        if(b==0)
            printf("divisao impossivel\n");
        else
        {
            div= a/b;
            printf("%0.1f\n", div);
        }


    }

    return 0;
}

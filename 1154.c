#include<stdio.h>
int main()
{
    float n, sum = 0, c = 0;
    while(1)
    {
        scanf("%f", &n);
        if(n<0)
            break;
        else
        {
            sum = sum + n;
            c = c + 1;
        }
    }
    printf("%0.2f\n", sum/c);
    return 0;
}

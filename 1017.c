#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    float ans = (a*b)/12.0;

    printf("%0.3f\n", ans);


    return 0;
}

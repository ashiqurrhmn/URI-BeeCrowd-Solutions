#include<stdio.h>
int main()
{
    int n;
    float a, b, c;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        scanf("%f %f %f", &a, &b, &c);
        float avg = ((a*2)+(b*3)+(c*5))/10.0;
        printf("%0.1f\n", avg);
    }

    return 0;
}

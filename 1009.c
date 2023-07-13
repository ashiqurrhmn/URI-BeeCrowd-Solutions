#include <stdio.h>

int main()
{

    char cr;
    double a, b;
    scanf("%s %lf %lf", &cr, &a, &b);
    double t=a+ b*.15;

    printf("TOTAL = R$ %0.2lf\n", t);

    return 0;
}

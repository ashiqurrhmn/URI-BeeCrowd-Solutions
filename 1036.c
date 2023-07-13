#include <stdio.h>

int main()
{

    double a, b, c, x, y, z;
    scanf("%lf %lf %lf", &a, &b, &c);

    x= b*b - 4*a*c;
    y= (-b + sqrt(x))/(a+a);
    z= (-b - sqrt(x))/(a+a);

    if(x<0)
        printf("Impossivel calcular\n");
    else if(a==0)
        printf("Impossivel calcular\n");
    else
    {
        printf("R1 = %.5lf\n", y);
        printf("R2 = %.5lf\n", z);
    }


    return 0;
}

#include<stdio.h>
int main()
{
    float s=1;
    int i, a=2;
    for(i = 3; i<=39; i+=2)
    {
        s = s + (1.0*i/a);
        a = a*2;
    }
    printf("%0.2f\n", s);

    return 0;
}

#include<stdio.h>
int main()
{
    float s;
    s=1;
    for(int i=2; i<=100; i++)
    {
        s+=1.0/i;
    }
    printf("%0.2f\n", s);

    return 0;
}

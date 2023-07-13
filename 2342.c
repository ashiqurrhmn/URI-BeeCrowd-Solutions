#include <stdio.h>

int main()
{

    int A, P, Q;
    char x;

    scanf("%d", &A);
    scanf("%d %c %d", &P, &x, &Q);

    if(x=='+')
    {
        if(P + Q<=A)
        {
            printf("OK\n");
        }
        else
        {
            printf("OVERFLOW\n");
        }

    }
    else if(x=='*')
    {
        if(P * Q<=A)
        {
            printf("OK\n");
        }
        else
        {
            printf("OVERFLOW\n");
        }
    }

    return 0;
}

#include<stdio.h>
int main()
{
    float n,a[2], avg;
    int  i=0, x;
    while(1)
    {
        while(1)
        {
            scanf("%f", &n);
            if(n>=0 && n<=10)
            {
                a[i]=n;
                i++;
            }

            else
                printf("nota invalida\n");
            if(i>1)
                break;
        }
        avg=(a[0]+a[1])/2.0;
        printf("media = %.2f\n", avg);
        i=0;
        while(1)
        {
            scanf("%d", &x);
            printf("novo calculo (1-sim 2-nao)\n");
            if(x==1 || x==2)
                break;
        }
        if(x==1)
            continue;
        else
            break;
    }

    return 0;
}


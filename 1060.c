#include <stdio.h>

int main() {

    float n;
    int p=0, nn=0, i;
    for(i=1; i<=6; i++)
    {
        scanf("%f", &n);
        if(n>0)
        p++;
        else
        nn++;
    }
    printf("%d valores positivos\n", p);

    return 0;
}

#include<stdio.h>
int main()
{
    int a,b,c,MaiorABC,MaiorAB;
    scanf("%d %d %d",&a,&b,&c);
    MaiorAB = (a+b+abs(a-b))/2;
    MaiorABC = (MaiorAB+c+abs(MaiorAB-c))/2;
    printf("%d eh o maior",MaiorABC);
    printf("\n");

    return 0;
}

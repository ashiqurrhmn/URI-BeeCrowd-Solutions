#include <stdio.h>

int main()
{

    char a[20];
    int c=1, i;
    scanf("%s", &a);
    c=strlen(a);
    if(c<10)
        printf("palavrinha\n");
    else if(c>=10)
        printf("palavrao\n");

    return 0;
}

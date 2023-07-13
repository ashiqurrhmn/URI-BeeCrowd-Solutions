#include <stdio.h>

int main()
{

    char string[30];

    for (int i = 1; i <= 10; ++i)
    {

        scanf("%s", string);

        if (i == 3)
            puts(string);
        else if (i == 7)
            puts(string);
        else if (i == 9)
            puts(string);

    }

    return 0;

}

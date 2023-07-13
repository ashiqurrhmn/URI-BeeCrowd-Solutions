#include <stdio.h>

int main() {

    int N, count=0, r;
    scanf("%d", &N);
    for(int i=1; i<=N; i++)
    {

        scanf("%d", &r);

        count++;
        printf("resposta %d: %d\n", count, r);

    }
    return 0;
}

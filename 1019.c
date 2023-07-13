#include <stdio.h>

int main() {

   int N, H, M;
   scanf("%d", &N);

   H = N/3600;
   N = N%3600;
   M = N/60;
   N = N%60;

   printf("%d:%d:%d\n", H, M, N);

    return 0;
}

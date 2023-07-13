#include <stdio.h>

int main() {

 int i = 0, j = 0, N, K, a;

 scanf("%d", &N);

 for(i = 0; i < N; ++i)
 {
    scanf("%d", &K);

    for(j = 0; j < K; ++j)
    {
     scanf("%d", &a);

     if(a == 1){
        printf("Rolien\n");
     } else if(a == 2){
       printf("Naej\n");
     } else if(a == 3){
       printf("Elehcim\n");
     } else{
       printf("Odranoel\n");
     }
    }
   }
    return 0;
}

#include<stdio.h>
int main()
{
   int sd, ed, sh, sm, ss, eh, em, es, fd, fh,fm, fs;
   char a[4];
   scanf("%s %d", a, &sd);
   scanf("%d %s %d %s %d", &sh, a, &sm, a, &ss);
   scanf("%s %d", a, &ed);
   scanf("%d %s %d %s %d", &eh, a, &em, a, &es);

   long d= ((ed*86400)+(eh*3600)+(em*60)+es)-((sd*86400)+(sh*3600)+(sm*60)+ss);
   fd= d/86400;
   fh= (d%86400)/3600;
   fm= ((d%86400)%3600)/60;
   fs= (((d%86400)%3600)%60);

   printf("%d dia(s)\n", fd);
   printf("%d hora(s)\n", fh);
   printf("%d minuto(s)\n", fm);
   printf("%d segundo(s)\n", fs);


    return 0;
}

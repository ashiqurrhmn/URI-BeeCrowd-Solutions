#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
   int sd, ed, sh, sm, ss, eh, em, es, fd, fh,fm, fs;
   string a;
   cin>>a>>sd;
   cin>>sh>>a>>sm>>a>>ss;
   cin>>a>>ed;
   cin>>eh>>a>>em>>a>>es;

   long d= ((ed*86400)+(eh*3600)+(em*60)+es)-((sd*86400)+(sh*3600)+(sm*60)+ss);
   fd= d/86400;
   fh= (d%86400)/3600;
   fm= ((d%86400)%3600)/60;
   fs= (((d%86400)%3600)%60);

   cout<<fd<<" dia(s)"<<endl;
   cout<<fh<<" hora(s)"<<endl;
   cout<<fm<<" minuto(s)"<<endl;
   cout<<fs<<" segundo(s)"<<endl;

    return 0;
}

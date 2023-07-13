#include<iostream>
using namespace std;
int main()
{
    int n, m, d, c=0;
    while(true)
    {
        cin>>n>>m;
        if(n==0 && m==0)
            break;
        d=m-n;
        if(d>=100)
        {
            c++;
            d-=100;

        }
        if(d>=50 && d<100)
        {
            c++;
            d-=50;
        }
        if(d>=20 && d<50)
        {
            c++;
            d-=20;
        }
        if(d>=10 && d<20)
        {
            c++;
            d-=10;

        }
        if(d>=5 && d<10)
        {
            c++;
            d-=5;
        }
        if(d>=2 && d<5)
        {
            c++;
            d-=2;
        }
        if(d==0 && c==2)
            cout<<"possible"<<endl;
        else
            cout<<"impossible"<<endl;
        c=0;
    }

    return 0;
}

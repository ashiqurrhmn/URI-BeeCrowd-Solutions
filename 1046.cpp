#include<iostream>
using namespace std;
int main()
{
    int a, b, t;
    cin>>a>>b;

    if(a>b || a==b)
    {
        t = 24 - (a - b);
        cout<<"O JOGO DUROU "<<t<<" HORA(S)"<<endl;
    }
    else
    {
        t= b - a;
        cout<<"O JOGO DUROU "<<t<<" HORA(S)"<<endl;
    }


    return 0;
}

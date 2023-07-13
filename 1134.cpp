#include<iostream>
using namespace std;
int main()
{
    int n, a=0, d=0, g=0;
    while(true)
    {
        cin>>n;
        if(n==4)break;
        if(n==1)
            a++;
        else if(n==2)
            g++;
        else if(n==3)
            d++;
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<a<<endl;
    cout<<"Gasolina: "<<g<<endl;
    cout<<"Diesel: "<<d<<endl;

    return 0;
}

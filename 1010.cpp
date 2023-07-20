#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a, b;
    float c, sum=0;

    for(int i=1; i<=2; i++)
    {
        cin>>a>>b>>c;
        sum=sum+ b*c;
    }
    cout<<fixed;
    cout<<setprecision(2)<<"VALOR A PAGAR: R$ "<<sum<<endl;

    return 0;
}

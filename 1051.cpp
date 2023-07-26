#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float n, t;
    cin>>n;
    if(n<=2000.00)
    {
        cout<<"Isento"<<endl;
    }
    else if(n>=2000.01 && n<=3000.00)
    {
        t=(n-2000)*0.08;
        cout<<fixed<<setprecision(2)<<"R$ "<<t<<endl;
    }
    else if(n>=3000.01 && n<=4500.00)
    {
        t= (n-3000)*0.18 + 1000*0.08;
        cout<<fixed<<setprecision(2)<<"R$ "<<t<<endl;
    }
    else if(n>4500.00)
    {
        t= (n-4500)*0.28 + 1500*0.18 + 1000*0.08;
        cout<<fixed<<setprecision(2)<<"R$ "<<t<<endl;
    }

    return 0;
}

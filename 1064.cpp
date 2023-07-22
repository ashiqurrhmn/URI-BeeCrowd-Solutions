#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i, p=0;
    float n, sum=0;
    for(i=1; i<=6; i++)
    {
        cin>>n;
        if(n>0)
        {
           p++;
           sum=sum+n;
        }

    }
    cout<<fixed;
    cout<<p<<" valores positivos"<<endl;
    cout<<setprecision(1)<<sum/p<<endl;


    return 0;
}

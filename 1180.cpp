#include<iostream>
using namespace std;
int main()
{
    int n, a=1000, p=0, i;
    cin>>n;
    int ar[n];

    for(i=0; i<n; i++)
    {
        cin>>ar[i];
        if(ar[i]<a)
        {
            a=ar[i];
            p=i;
        }
    }
    cout<<"Menor valor: "<<a<<endl;
    cout<<"Posicao: "<<p<<endl;

    return 0;
}

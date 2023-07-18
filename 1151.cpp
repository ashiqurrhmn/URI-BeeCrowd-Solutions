#include<iostream>
using namespace std;
int main()
{
    int n, ar[46], i;
    cin>>n;

    ar[0]=0;
    ar[1]=1;

    for(i=2; i<n; i++)
    {
        ar[i]= ar[i-1]+ar[i-2];
    }
    for(i=0; i<n; i++)
    {
        if(i==n-1)
            cout<<ar[i];
        else
        cout<<ar[i]<<" ";
    }
    cout<<endl;



return 0;
}

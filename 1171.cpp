#include<iostream>
using namespace std;
int main()
{
    int n, a[2000]={0}, x, i;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        a[x-1]++;
    }
    for(i=0; i<2000; i++)
    {
        if(a[i]>0)
            cout<<i+1<<" aparece "<<a[i]<<" vez(es)"<<endl;
    }



    return 0;
}

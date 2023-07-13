#include<iostream>
using namespace std;
int main()
{
    int n, m, max, i;
    while(true)
    {
        cin>>n>>m;
        if(n<=0)break;
        if(m<=0)break;

        if(n>m)
        {
            max=n;
            n=m;
            m=max;
        }
        int sum=0;
        for(i=n; i<=m; i++)
        {
            cout<<i<<" ";
            sum+=i;

        }
        cout<<"Sum="<<sum<<endl;



    }



    return 0;
}

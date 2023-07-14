#include<iostream>
using namespace std;
int main()
{
    int n, i;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        for(i=1; i<=n; i++)
        {
            cout<<i;
            cout<<((i==n)?"\n":" ");
        }
    }
    return 0;
}

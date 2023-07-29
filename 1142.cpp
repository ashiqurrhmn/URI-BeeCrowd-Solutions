#include<iostream>
using namespace std;
int main()
{
    int n, x=1, i, j;
    cin>>n;
    for(i = 1; i<=n; i++)
    {
        for(j = x; j<=x+2; j++)
        {
            cout<<j<<" ";
        }
        cout<<"PUM"<<endl;
        x+=4;
    }

    return 0;
}

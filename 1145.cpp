#include<iostream>
using namespace std;
int main()
{
    int x, y, i, n;
    cin>>x>>y;
    n=1;
    for(i=1; i<=y; i++)
    {
        if(n==x)
        {
            cout<<i<<endl;
            n=1;
        }
        else
        {
            cout<<i<<" ";
            n++;
        }
    }


    return 0;
}

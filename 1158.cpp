#include<iostream>
using namespace std;
int main()
{
    int n, x, y;
    cin>>n;
    for(int i = 1; i<=n; i++)
    {
        cin>>x>>y;
        int sum = 0;
        if(x%2==0)
        {
            int a= x+1;
            for(int j = 1; j<=y; j++)
            {
                sum = sum + a;
                a+=2;
            }
            cout<<sum<<endl;
        }
        else
        {
            for(int j = 1; j<=y; j++)
            {
                sum = sum + x;
                x+=2;
            }
            cout<<sum<<endl;
        }
    }

    return 0;
}

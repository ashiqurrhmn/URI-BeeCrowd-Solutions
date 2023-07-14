#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    int n;
    double t, m;
    while(cin>>n)
    {
        m=12.00;
        while(n--)
        {
            cin>>t;
            if(t<m)
                m=t;
        }
        cout<<fixed;
        cout<<setprecision(2)<<m<<endl;
    }
    return 0;
}

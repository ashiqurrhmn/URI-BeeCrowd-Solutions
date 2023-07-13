#include<iostream>
using namespace std;
int main()
{
    int n, i, x, y, a, b;

    while(cin>>n && n!=0)
    {


        a=0;
        b=0;
        for(i=1; i<=n; i++)
        {
            cin>>x>>y;
            if(x>y)
                a++;
            else if(y>x)
                b++;
        }
        cout<<a<<" "<<b<<endl;
    }


    return 0;
}

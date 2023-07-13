#include<iostream>
using namespace std;
int main()
{
    int n, i, j, k, a, b;
    while(true)
    {
        cin>>n;
        a=n/2+1;
        for(i=1; i<=a; i++)
        {
            for(j=i; j<=n/2; j++)
            {
                cout<<" ";
            }
            b=2*i-1;
            for(k=1; k<=b; k++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        int c=1;
        while(c<=2)

        {

            for(j=c; j<=n/2; j++)
            {
                cout<<" ";
            }
            int d=2*c-1;
            for(k=1; k<=d; k++)
            {
                cout<<"*";
            }
            cout<<endl;
            c++;
        }
        cout<<endl;

    }
    return 0;
}

#include<iostream>
using namespace std;

int main()
{
    int n, max=0, pos=0, i;
    for(i=1; i<=100; i++)
    {
        cin>>n;
        if(n>max)
        {
            max=n;
            pos=i;
        }
    }
    cout<<max<<endl;
    cout<<pos<<endl;

    return 0;
}

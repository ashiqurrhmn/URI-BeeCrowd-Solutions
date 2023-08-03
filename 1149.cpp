#include<iostream>
using namespace std;
int main()
{
    int a, n, s=0, i;
    cin>>a>>n;
    while(n<=0)
    {
        cin>>n;
    }
    for(i = 1; i<=n; i++)
    {
        s = s+a;
        a++;
    }
    cout<<s<<endl;

    return 0;
}

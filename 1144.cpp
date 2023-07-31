#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int x=i*i;
        int y=x*i;
        cout<<i<<" "<<x<<" "<<y<<endl;
        cout<<i<<" "<<x+1<<" "<<y+1<<endl;
    }

    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int n, x, i;
    string a;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a>>x;
        if(a=="Thor")
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }

    return 0;
}

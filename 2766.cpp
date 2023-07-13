#include<iostream>
using namespace std;
int main()
{
    string a;
    int i;
    for(i=1; i<=10; i++)
    {
        cin>>a;
        if(i==3)
            cout<<a<<endl;
        else if(i==7)
            cout<<a<<endl;
        else if(i==9)
            cout<<a<<endl;
    }

    return 0;
}

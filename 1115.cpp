#include<iostream>
using namespace std;
int main()
{
    int a, b;
    while(true)
    {
        cin>>a>>b;
        if(a==0 || b==0)
            break;
        else if(a>0 && b<0)
            cout<<"quarto"<<endl;
        else if(a<0 && b<0)
            cout<<"terceiro"<<endl;
        else if(a<0 && b>0)
            cout<<"segundo"<<endl;
        else if(a>0 && b>0)
            cout<<"primeiro"<<endl;
    }
    return 0;
}

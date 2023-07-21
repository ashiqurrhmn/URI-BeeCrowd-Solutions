#include<iostream>
using namespace std;
int main()
{
    int d, y, m, m1, d1;
    cin>>d;

    y = d/365;
    m = d - 365*y;
    m1 = m/30;
    d1 = m - 30*m1;

    cout<<y<<" ano(s)"<<endl;
    cout<<m1<<" mes(es)"<<endl;
    cout<<d1<<" dia(s)"<<endl;



    return 0;
}

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double n, v;
    cin>>n;
    v=(4.0/3)*3.14159*n*n*n;
    cout<<fixed;
    cout<<setprecision(3)<<"VOLUME = "<<v<<endl;

    return 0;
}

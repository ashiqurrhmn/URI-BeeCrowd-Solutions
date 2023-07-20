#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a, b, c;
    cin>>a>>b>>c;

    float sum= a*2 + b*3 + c*5;
    float avg= sum/10;

    cout<<fixed;
    cout<<setprecision(1)<<"MEDIA = "<<avg<<endl;;

    return 0;
}

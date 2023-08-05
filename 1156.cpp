#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float s=1;
    int a=2,i;
    for (i = 3; i<=39; i+=2)
    {
        s = s + (1.0*i/a);
        a = a*2;
    }
    cout<<fixed<<setprecision(2)<<s<<endl;

    return 0;
}

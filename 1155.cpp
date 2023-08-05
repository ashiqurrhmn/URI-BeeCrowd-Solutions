#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float s;
    s = 1;
    for (int i = 2; i<=100; i++)
    {
        s = s + 1.0/i;
    }
    cout<<fixed<<setprecision(2)<<s<<endl;

    return 0;
}

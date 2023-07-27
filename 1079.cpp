#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float a, b, c;
    int i = 1;
    while(i<=n)
    {
        cin>>a>>b>>c;
        float avg = ((a*2)+(b*3)+(c*5))/10.0;
        cout<<fixed<<setprecision(1)<<avg<<endl;
        i++;
    }

    return 0;
}

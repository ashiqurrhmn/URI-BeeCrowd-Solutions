#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float n, sum = 0, c = 0;
    while(1)
    {
        cin>>n;
        if(n<0)
            break;
        else
        {
            sum += n;
            c += 1;
        }
    }
    cout<<fixed<<setprecision(2)<<sum/c<<endl;

    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int x, i, j, a, sum;
    while(1)
    {
        cin>>x;
        sum = 0;
        if(x==0)
            break;
        else if(x%2==0)
        {
            for(j = 1; j<=5; j++)
            {
                sum = sum + x;
                x+=2;
            }
            cout<<sum<<endl;
        }
        else
        {
            a = x+1;
            for(j = 1; j<=5; j++)
            {
                sum = sum + a;
                a+=2;
            }
            cout<<sum<<endl;
        }
    }

    return 0;
}

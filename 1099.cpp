#include<iostream>
using namespace std;
int main()
{
    int n, i, a, b, temp;
    cin>>n;
    for(i = 0; i < n; i++)
    {
        cin>>a>>b;
        if(b<a)
        {
            temp = a;
            a = b;
            b = temp;
        }
        int sum = 0 ;
        for(int j = a+1; j<b; j++)
        {
            if(j%2!=0)
            {
                sum += j;
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}

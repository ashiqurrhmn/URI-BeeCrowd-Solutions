    #include<iostream>
    using namespace std;
    int main()
    {
        int n, i=2, x;
        cin>>n;
        while(i<10000)
        {
            x=i%n;
            if(x==2)
                cout<<i<<"\n";
            i++;
        }

        return 0;
    }


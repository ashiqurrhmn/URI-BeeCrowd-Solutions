    #include<stdio.h>
    int main()
    {
        int n, i=2, x;
        scanf("%d", &n);
        while(i<10000)
        {
            x=i%n;
            if(x==2)
                printf("%d\n", i);
            i++;
        }

        return 0;
    }

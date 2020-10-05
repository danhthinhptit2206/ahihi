#include<stdio.h>
int tong(long long n)
{
    int s=0;
    while(n>0)
    {
        s=s+n%10;
        n=n/10;
    }
    return s;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n;
        int s=0;
        long long a[100];
        long long h=0;
        scanf("%d",&n);
        int e=tong(n);
        long long i;
        for(i=2; i<=n; i++)
        {
            while(n%i==0)
            {
                a[h]=i;
                n=n/i;
                h++;
            }
        }

        for(i=0; i<h; i++)
        {
            if(a[i]>10)
            {
                a[i]=tong(a[i]);
            }
            s=s+a[i];
        }
        if(e==s) printf("YES\n");
        else printf("NO\n");
    }
}



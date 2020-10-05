#include<stdio.h>
void GiamDan(long long a[], long long n)
{
    long long tg;
    for(long long i = 0; i < n - 1; i++)
    {
        for(long long j = i + 1; j < n; j++)
        {
            if(a[i] < a[j])
            {
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n,b;
        scanf("%lld%lld",&n,&b);
        long long a[n];
        long long i;
        for(i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
        }
        GiamDan(a,n);
        int c=0;
        for(i=0; i<n; i++)
        {
            if(b>=a[i])
            {
                b=b-a[i];
                c++;
            }
        }
        if(b==0)
        printf("%d\n",c);
        else printf("-1");
    }
}

#include<stdio.h>
long long chuso(long long n)
{
    long long b=1;
    while(n>0)
    {
        n=n/10;
        b=b*10;
    }
    return b;
}
long long kiemtra(long long a,long long b)
{
    long long s=0;
    long long c=chuso(b);
    s=a*c+b;
    return s;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long a,b,c,dem=0;
        scanf("%lld%lld",&a,&b);
        long long i,j;
        for(i=1;i<=a;i++)
        {
            for(j=1;j<=b;j++)
            {
                c=kiemtra(i,j);
                float e,f;
                e=(float)i/j;
                f=(float)c/j;
                if(i+e+1==f)
                    dem++;
            }
        }
        printf("%lld\n",dem);
    }
    return 0;
}

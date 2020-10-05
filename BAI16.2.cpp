#include<stdio.h>
long long luyThua(long long a,long long b)
{
    if(b==0) return 1;
    return a*luyThua(a,b-1);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long a,b;
        scanf("%lld%lld",&a,&b);
        printf("%lld\n",luyThua(a,b));
    }
    return 0;
}

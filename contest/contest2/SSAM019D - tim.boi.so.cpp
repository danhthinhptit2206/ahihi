#include<stdio.h>
int kiemtra(long long n)
{
    while(n>0)
    {
        int a=n%10;
        if(a!=0&&a!=9)
        {
            return 0;
            break;
        }
        n=n/10;
    }
    return 1;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
            long long b=0,i=1;
        while(2)
        {
            b=n*i;
            if(kiemtra(b)==1)
            {
                printf("%lld\n",b);
                break;
            }
            i++;

        }

    }
}

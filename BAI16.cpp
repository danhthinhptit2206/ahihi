#include<stdio.h>
#include<math.h>
void TangDan(long long a[], long long n)
{
    long long tg;
    for(long long i = 0; i < n - 1; i++)
    {
        for(long long  j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
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
        long long a[n],i,c[n],j,d[n],h=0;
        for(i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
        }
        for(i=0; i<n; i++)
        {
            c[i]=abs(b-a[i]);
        }
        TangDan(c,n);
        for(i=0; i<n; i++)
        {
            if(c[i]!=c[i+1])
            {
                d[h]=c[i];
                h++;

            }

        }
        for(i=0; i<h; i++)
        {
           for(j=0; j<n; j++)
            {
                if(d[i]==abs(b-a[j]))
                {
                    printf("%lld ",a[j]);
                }
            }
        }
        printf("\n");

    }
}


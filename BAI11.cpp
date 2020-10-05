#include<stdio.h>
void TangDan(int a[], int n)
{
    int tg;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
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

long long so(int a[],int n)
{
    long long i,s=0,b=1;
    for(i=n-1; i>=0; i--)
    {
        s=s+a[i]*b;
        b=b*10;
    }
    return s;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int i;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        TangDan(a,n);
        int c[100],d[100];
        int h=0,k=0;
        for(i=0; i<n; i++)
        {
            if(i%2==0)
            {
                c[h]=a[i];
                h++;
            }
            else
            {
                d[k]=a[i];
                k++;
            }
        }
        long long s,e,f;
        e=so(c,h);
        f=so(d,k);
        s=e+f;
        printf("%lld\n",s);

    }
}

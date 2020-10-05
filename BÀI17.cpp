#include<stdio.h>
int nho(int a[],int n)
{
    int i;
    int b=a[0];
    for(i=0;i<n;i++)
    {
        if(b>a[i])
            b=a[i];
    }
    return b;
}

int lon(int a[],int n)
{
    int i;
    int b=a[0];
    for(i=0;i<n;i++)
    {
        if(b<a[i])
            b=a[i];
    }
    return b;
}

main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int i,j,h=0,t=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int e=nho(a,n);
        int f=lon(a,n);
        for(i=e+1;i<f;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==a[j])
                    t++;
            }
            if(t==0) h++;
            t=0;
        }
        printf("%d\n",h);
    }
}

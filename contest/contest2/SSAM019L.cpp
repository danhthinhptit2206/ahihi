#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n,h;
        scanf("%lld%lld",&n,&h);
        long long s=h;
        int i;
        for(i=1;i<n;i++)
        {
            printf("%.6lf\n",sqrt((double)i/n)*h);
        }

    }
}

#include<stdio.h>
main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int i,j,n,l=0,u=0;
        scanf("%d",&n);
        long long a[n];
        for(i=0; i<n; i++) scanf("%lld",&a[i]);
        l=0;
        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(a[i]==a[j])
                {
                    printf("%d\n",a[i]);
                    l++;
                    u++;
                }
            }
            if(u>0) break;
        }
        if (l==0) printf("NO\n");
    }
}

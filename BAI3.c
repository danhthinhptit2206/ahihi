#include<stdio.h>
int main()
{
    int n,j=1,b,c,i;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    {
        b=j+3;
        scanf("%d + %d = %d",&a[j],&a[j+1],&a[j+2]);
        j=j+3;
    }
    for(j=1;j<b;j++)
    {
        if(j%3==0)
        {
            c=a[j-2]+a[j-1];
            if(c==a[j])
                printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}

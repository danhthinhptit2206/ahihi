#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,b,c,d,e,f,g,h,k,j;
        int a[12];
        for(i=0;i<12;i++)
        {
            scanf("%d",&a[i]);
        }
        b=a[3]-a[0];
        c=a[4]-a[1];
        d=a[5]-a[2];
        e=a[6]-a[0];
        f=a[7]-a[1];
        g=a[8]-a[2];
        h=a[9]-a[0];
        k=a[10]-a[1];
        j=a[11]-a[2];
        if(h*(c*g-f*d)+k*(d*e-g*b)+j*(b*f-e*c)==0)
            printf("YES\n");
        else printf("NO\n");
    }
}

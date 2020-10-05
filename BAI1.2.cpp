#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[1001];
        scanf("%s",&a);
        int i,j,l=0;
        int b=strlen(a)-1;
        for(i=b; i>=0; i--)
        {
            int u=i+1;
            if(a[i]=='0')
            {
                a[i]='1';
                for(j=u; j<=b; j++)
                {
                    a[j]='0';
                }
                l++;
                break;

            }
        }
        if(l==0)
        {
            for(i=0; i<=b; i++)
            {
                a[i]='0';
            }
        }
        printf("%s\n",a);
    }
}

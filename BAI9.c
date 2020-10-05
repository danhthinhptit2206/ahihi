#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,j;
    int b[]={1000,500,200,100,50,20,10,5,2,1};
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int c=0;
        for(j=0;j<10;j++)
        {
            while(a[i]>=b[j])
            {
                a[i]=a[i]-b[j];
                c++;
            }
        }
       printf("%d\n",c);
    }
    return 0;
}

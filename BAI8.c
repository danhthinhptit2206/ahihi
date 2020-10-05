#include<stdio.h>
#include<math.h>
int kiemtra(int n)
{
    int dem=0;
    int i;
    for(i=2;i<sqrt(n);i++)
        {
            if(n%i==0)
            {
                if(i%2==0) dem++;
                if((n/i)%2==0) dem++;
            }
        }
        if(n%2==0) dem++;
        if(i==sqrt(n)&&i%2==0)
        dem++;
        return dem;
}
main()
{
    int x,n,dem,i;
    scanf("%d",&x);
    while(x--)
    {
        scanf("%d",&n);
        i=kiemtra(n);
        printf("%d\n",i);
    }
}

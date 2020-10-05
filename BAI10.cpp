#include <stdio.h>
int sau(int n)
{
    int s=0,b=1,a;
    while(n>0)
    {
        a=n%10;
        if(a==5)
        {
            a=6;
        }
        s=s+a*b;
        n=n/10;
        b=b*10;
    }
    return s;
}

int nam(int n)
{
    int s=0,b=1,a;
    while(n>0)
    {
        a=n%10;
        if(a==6)
        {
            a=5;
        }
        s=s+a*b;
        n=n/10;
        b=b*10;
    }
    return s;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int e=nam(a)+nam(b);
    int f=sau(a)+sau(b);
    printf("%d %d",e,f);
}


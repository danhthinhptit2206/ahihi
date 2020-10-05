#include<stdio.h>
int ucln(int a, int b)
{
    int i;
    if(a>b)
    {
        int temp;
        temp=a;
        a=b;
        b=temp;
    }
    for(i=a; i>=1; i--)
    {
        if(b%i==0&&a%i==0)
        {
            return i;
            break;
        }
    }
}

main()
{
    int t,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf ("%d %d",&a,&b);

        int x=ucln(a,b);
        printf ("%d %lld\n",x,((long long)a*b)/x);

    }
    return 0;

}

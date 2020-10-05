#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);


        {
            int e=a%(b+1);
            if((e)==0) printf("Second\n");
            else printf("First\n");
        }

    }
}

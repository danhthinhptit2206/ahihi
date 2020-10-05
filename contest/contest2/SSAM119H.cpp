#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[100000];
        scanf("%s",&a);
        int b;
        int c=a[strlen(a)-1];
        int d=a[strlen(a)-2];
        int e=((c-48)+(d-48)*10)%4;
        int f=((c-48)+(d-48)*10)%4;
        int g=((c-48)+(d-48)*10)%2;
        int t,y,u;
        if(e==0) t=6;
        if(e==1) t=2;
        if(e==2) t=4;
        if(e==3) t=8;
        if(f==0) y=1;
        if(f==1) y=3;
        if(f==2) y=9;
        if(f==3) y=7;
        if(g==0) u=6;
        if(g==1) u=4;
        b=1+t+y+u;
        int k;
        k=b%5;
        printf("%d\n",k);
    }
}

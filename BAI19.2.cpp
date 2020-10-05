#include<stdio.h>
int tong(int a[] , int n , int b[] , int m)
{
    int c[100];
    int temp;
    if(m>n)
    {
        temp=n;
        n=m;
        m=temp;
    }
    for(int i=0 ; i<n ; i++)
    {
        c[i]=a[i]+b[i];
        if(c[i]>=10)
        {
            c[i]=0;
            a[i+1]=a[i+1]+1;
        }
    }
}


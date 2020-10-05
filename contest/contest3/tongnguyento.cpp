#include<iostream>
#include<math.h>
using namespace std;

long long  nguyento(long long n)
{
    if(n==1) return 0;
    if(n==2) return 1;
    for(long long i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            return 0;
            break;
        }
    }
    return 1;
}


long long phantich(long long n)
{
    long long s=0;
    for(long long i=2; i<=sqrt(n); i++)
    {
        while(n%i==0)
        {
            s=s+i;
            n=n/i;
        }
    }
    if(n!=1)
    s=s+n;
    return s;
}

int main()
{
    long long n;
    cin>>n;

    long long a[n];
    long long b[n],c[n];
    long long d=0,h=0,k=0,s=0,v;
    for(long long i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(long long i=0; i<n; i++)
    {
        if(nguyento(a[i])==1)
        {
            b[h]=a[i];
            h++;
        }
        else
        {
            c[k]=a[i];
            k++;
        }
    }
    for(long long i=0; i<h; i++)
    {
        s=s+b[i];
    }
    for(long long i=0; i<k; i++)
    {
        v=phantich(c[i]);
        s=s+v;
    }
    cout<<s;
    return 0;
}

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

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long i=1,dem=0;
    while(2)
    {
        if(nguyento(i)==1)
        {
            dem++;
        }
        i++;
        if(dem==n) break;
    }
    cout<<i-1<<"\n";
    }
}

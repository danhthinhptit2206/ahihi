#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    char a[2000001];
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long s=0;
    for(long long i=0;i<n;i++)
    {
        s=s+a[i];
    }
    s=s-48*n;
    if(s%2==0) cout<<s-1;
    else cout<<s;
    return 0;
}

#include<stdio.h>
void TangDan(int a[], int n)
{
    int tg;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
}
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int i;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        TangDan(a,n);
        for(i=0; i<n; i++)
        {
            if((n-1)==i)
            {
                printf("%d ",a[i]);
                break;
            }
            else
            {
                printf("%d ",a[n-1]);
                n--;
                printf("%d ",a[i]);
            }
        }
        printf("\n");
    }
}

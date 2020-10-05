#include<stdio.h>
#include<string.h>
int giam(char s[])
{
    int i;
    for(i=0;i<strlen(s)-1;i++)
    {
        if(s[i]>s[i+1])
        {
            return 0;
        }
    }
    return 1;
}

int tang(char s[])
{
    int i;
    for(i=0;i<strlen(s)-1;i++)
    {
        if(s[i]<s[i+1])
        {
            return 0;
        }
    }
    return 1;
}

main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        char a[501];
        scanf("%s",&a);
        if(tang(a)==1||giam(a)==1) printf("YES\n");
        else printf("NO\n");
    }
}

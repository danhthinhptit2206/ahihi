#include<stdio.h>
#include<string.h>
main()
{
    int test;
    scanf("%d",&test);
    char a[10];
    while(test--)
    {
        scanf("%s",&a);
        int i;
            int t=strlen(a)-1;
            if(a[0]==a[t]) printf("YES\n");
            else printf("NO\n");
    }
}

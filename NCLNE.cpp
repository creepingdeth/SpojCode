#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,n,c=1;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n-1;i++)
        {
            c=2*(c-a[i]);
        }

        if(a[n-1]==c)
            printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}

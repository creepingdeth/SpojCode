#include<stdio.h>
int horner(int poly[], int n, int x)
{
    int result = poly[0];
    for (int i=1; i<=n; i++)
        result = result*x + poly[i];
        return result;
}
int main()
{
    int n,i,cas=1,v;
    scanf("%d",&n);
    while(n!=-1)
    {
        int c[n+1],k;
        for(i=0;i<=n;i++)
            scanf("%d",&c[i]);
        scanf("%d",&k);
        int a[k];
        for(i=0;i<k;i++)
            scanf("%d",&a[i]);
        printf ("Case %d:\n",cas);
        for(i=0;i<k;i++)
        {
            v=horner(c,n,a[i]);
            printf("%d\n",v);
        }
        scanf("%d",&n);
        cas++;

    }
    return 0;
}

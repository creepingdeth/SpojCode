
#include<stdio.h>
using namespace std;
int main()
{
int i,j,n;
for(i=0; ;i++)
{scanf("%d",&n);
    if(n==-1) break;
    int a[n],c=0,r=0;
    for(j=0;j<n;j++)
        scanf("%d",&a[j]);
    for(j=0;j<n;j++)
        c=c+a[j];

    if(c%n==0)
    { c=c/n;
            for(j=0;j<n;j++) {if(a[j]<c) r=r+(c-a[j]); }


            printf("%d\n",r);}
            else printf("-1\n");

}
 return 0;
}

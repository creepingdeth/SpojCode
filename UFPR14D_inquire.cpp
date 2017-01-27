#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{  long int n,i,a,b,q,j,s;
scanf("%ld",&n);
int p[n];
for(i=0;i<n;++i)
    scanf("%d",&p[i]);
    scanf("%ld",&q);
    for(j=0;j<q;++j)
    {  s=0;
        scanf("%ld%ld",&a,&b);
       for(i=a-1;i<=b-1;++i)
            s=s+p[i];
       printf("%ld\n",s);
    }

    return 0;
}

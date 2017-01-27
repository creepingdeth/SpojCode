#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
     long int n,m,l,r,x,i,j,s;
     scanf("%ld%ld",&n,&m);
     long int p[n];
     for(i=0;i<n;i++)
        scanf("%ld",&p[i]);
     for(j=0;j<m;j++)
        {s=0;scanf("%ld%ld%ld",&l,&r,&x);
     for(i=(l-1);i<r;i++)
     {
        s=s+(p[i]%x);
     }
     printf("%ld\n",s);

        }
        return 0;
}

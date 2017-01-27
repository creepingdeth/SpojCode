#include<iostream>
#include<stdio.h>
using namespace std;
long int fun(long int x,long int y);

int main()
{
     long int n,k,i,j,c=0,d;
    scanf("%ld%ld",&n,&k);
    long long int a[n];
    for(i=0;i<n;++i)
        scanf("%ld",&a[i]);
    for(i=0;i<n-1;++i)
        for(j=i+1;j<n;++j)
{
    d=fun(a[i],a[j]);
        if (d==k)
           c++;

    }
    printf("%ld",c);

    return 0;
}
 long int fun(long int x,long int y)
 {
     long int d1;
     if(x>y)
        d1=x-y;
     else d1=y-x;
     return d1;
 }

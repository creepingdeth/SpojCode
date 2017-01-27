#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
int main()
{
     long int n,k,i,j,c=0,d;
    scanf("%ld%ld",&n,&k);
    long long int a[n];
    for(i=0;i<n;++i)
        scanf("%ld",&a[i]);
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;++j)

    { d=a[i]-a[j];
        if (abs(d)==k)
            c++;

    }
    printf("%ld",c);

    return 0;
}

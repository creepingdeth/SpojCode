#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,s=0, n,m,beg,last,mid;
    scanf("%lld%lld",&n,&m) ;
    long long int a[n];
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    sort(a,a+n);
    beg=0;last=n-1;
    while(beg<=last)
    {
      mid=(beg+last)/2;
       for(long long int j=mid;j<n;j++)
           s=s+(a[j]-a[mid]);
           if(s==m)
           {
               printf("%lld",a[mid]);break;
           }
        else if (s>m) beg=mid+1;
        else if(s<m) last=mid-1;
    } return 0;

}

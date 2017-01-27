#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;


int main()
{
     long int n,k,i,c=0,d,beg,last,mid;
    scanf("%ld%ld",&n,&k);
    long long int a[n];
    for(i=0;i<n;++i)
        scanf("%ld",&a[i]);

        sort(a,a+n);
    for(i=0;i<n-1;i++)
    {
        d=a[i]+k;
        beg=i+1;last=n-1;

        while(beg<=last)
  {
      mid=(beg+last)/2;
      if (a[mid]==d) {c++;break;}
      else if (d>a[mid]) beg=mid+1;
      else if (d<a[mid]) last=mid-1;
    }

    }

    printf("%ld",c);


    return 0;
}


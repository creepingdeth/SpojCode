#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
   long int n,k,i,beg,mid,last,d,c=0;
   scanf("%ld%ld",&n,&k);
   long int a[n];
   for(i=0;i<n;i++)
    scanf("%ld",&a[i]);
    sort(a,a+n);
   for(i=0;i<n-1;i++)
   { d=a[i]+k;
    beg=i+1;last=n-1;
     while(beg<=last)
     {
         mid=(beg+last)/2;
         if(a[mid]==d) {c++;break;}
         else if(a[mid]<d)beg=mid+1;
         else if(a[mid]>d)last=mid-1;

     }
   }
   printf("%ld",c);
   return 0;
}

#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
  long long int n,q,i,b,beg,last,x,t,mid;int l, k=-1;
  scanf("%lld%lld",&n,&q);
  long long int a[n];
  for(i=0;i<n;i++)
    scanf("%lld",&a[i]);
  //sort(a,a+n);
  for(long long int j=0;j<q;j++)
  {
t=(n-1);
l=1;
  beg=0;last=n-1;
  scanf("%lld",&b);
  while(beg<=last)
  {
      mid=(beg+last)/2;
      if (a[mid]==b ){ x=mid;while(a[x]==a[mid]){t=x;x--;}  {printf("%lld\n",t);l=0; break;}}
      else if (b>a[mid]) beg=mid+1;
      else if (b<a[mid]) last=mid-1;
      //else if(1) cout<<k<<endl;
  }
if(l!=0) printf("%d \n",k);
  }
  return 0;

}

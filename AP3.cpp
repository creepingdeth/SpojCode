#include<stdio.h>
using namespace std;
int main()
{
   long long t,a3,l4,s,n,a,d,i;
   scanf("%lld",&t);
   while(t--)
   {
       scanf("%lld%lld%lld",&a3,&l4,&s);
       n=((2*s)/((a3+l4)+((l4-a3)/(n-6))));
       d=(l4-a3)/(n-6);
       a=a3-(2*d);
       printf("%lld\n",n);
       for(i=0;i<n;i++)
    {

     printf("%lld ",a);
       a+=d;
   }
   }
   return 0;
}

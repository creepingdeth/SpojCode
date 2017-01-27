#include<iostream>
#include<stdio.h>
using namespace std;int main()
{
  long long int a1,a2,a3,i,n;
  for(i=0; ;i++)
  {
      scanf("%lld%lld%lld",&a1,&a2,&a3);
      if(a1==0&&a2==0&&a3==0) break;
      else if((2*a2)==(a1+a3))  printf("AP %lld\n",(2*a3)-a2);
        else if((a2*a2)==(a1*a3))  printf("GP %lld\n",a3*(a3/a2));
  }
 return 0;
}

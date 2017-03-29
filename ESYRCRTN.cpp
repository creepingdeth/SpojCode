#include<stdio.h>
using namespace std;
int main()
{
  long long int t,a,b,c,s,i,j,n;
  scanf("%lld",&t);
  for(i=0;i<t;i++)
  { s=0;
      scanf("%lld",&n);
      for(j=0;j<n;j++)
      {
          if(n==1) s=1;
          else if(n==3) s=3;
          else
            {
               a=1;b=3;
               c=b-a;
               s=s+c;
               a=b;b=c;
            }
      }
      printf("%lld\n",s);
  }
 return 0;
}

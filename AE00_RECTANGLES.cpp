#include<math.h>
#include<stdio.h>
using namespace std;
int main()
{
long long int n,r=0,i,j;
scanf("%lld",&n);
r=n;
for(j=2;j<=sqrt(n);j++)
for(i=j;i<=n/j;i++)
    r++;
printf("%lld",r);
 return 0;
}

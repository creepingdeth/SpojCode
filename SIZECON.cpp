#include<stdio.h>
using namespace std;
int main()
{
    int t,i;
    scanf("%d",&t);
     int n[t];
     long long int s=0;
      for(i=0;i<t;i++)
      {scanf("%d",&n[i]);
      if(n[i]>0)
      s=s+n[i];
      }
      printf("%lld",s);

    return 0;
}


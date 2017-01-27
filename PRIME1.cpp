#include<stdio.h>
#include<math.h>
using namespace std;

long long int checkPrimeNumber(long long int);

int main()
{   int t,j;
scanf("%d",&t);
    long long int m,n;
    bool flag;
    for(j=0;j<t;j++)
  {scanf("%lld%lld",&m,&n);
  if(m==1) m++;
    for(long long int i=m; i<=n; ++i)
    {
        // If i is a prime number, flag will be equal to 1
        flag = checkPrimeNumber(i);

        if(flag == true)
        printf("%lld\n",i);
    } printf("\n");
  }
    return 0;
}

// user-defined function to check prime number
long long int checkPrimeNumber(long long int n1)
{
    bool flag = true;

    for(long long int j1 = 2; j1 <= sqrt(n1); ++j1)
    {
        if (n1%j1 == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

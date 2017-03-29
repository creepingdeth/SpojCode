#include<stdio.h>
using namespace std;
int main()
{
    int n,i;
    long long s;
    scanf("%d",&n);
    while(n)
    {
        s=5*n;
        for(i=n-2;i>=0;i--)

        s+=3*i+2;
        printf("%lld\n",s);
        scanf("%d",&n);
    }
    return 0;

}

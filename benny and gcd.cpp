#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
long long int l,r,g,c=0,i,j,n1,n2;
scanf("%lld%lld%lld",&l,&r,&g);
for(i=l;i<=r;i++)
{for(j=l;j<=r;j++)
{n1=i;n2=j;
    if((n1==n2)&& n1==g){c++; printf("%lld%lld\n",n1,n2);break;}

        while(n1 != n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
if(n1==g) {c+=2;break;}

}
}
 printf("%lld",c);
return 0;
}

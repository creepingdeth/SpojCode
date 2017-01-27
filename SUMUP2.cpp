#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;
int main()
{
long int t,n,j;
double r,d,i;
scanf("%ld",&t);
for(i=0;i<t;i++)
{scanf("%ld",&n);r=0;

 for(j=1;j<=n;j++)
   {

    r=r+(j/(((j*j)+1)*(j*j)+1));}
    cout<<fixed<<setprecision(5)<<r<<endl;


}
return 0;
}

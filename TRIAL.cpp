#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;
int main()
{
    long int i,t,j;
    scanf("%ld",&t);
    double r=0,n;
    for(i=0;i<t;i++)
    {
    scanf("%ld",&j);
    r=0;
    for(n=1;n<=j;n++)
    r=r+(n/(((n*n)+1)*(n*n)+1));
    cout<<fixed<<setprecision(5)<<r<<endl;
    }
    return 0;
}

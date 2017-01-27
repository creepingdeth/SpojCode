#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{

    int t;long long int s,a3,l3,n,d,a;
    cin>>t;
    for(int i=0;i<t;i++)
    {
       scanf("%lld%lld%lld",&a3,&l3,&s); //cin>>a3>>l3>>s;

                    n=(2*s)/(a3+l3);
            d=(l3-a3)/(n-5);
            a=a3-(2*d);
            printf("%lld\n",n);//cout<<n<<endl;
            for(int k=0;k<n;k++)
            {
                printf("%lld ",a);//cout<<a<<" ";
                a=a+d;
            }


         cout<<endl;
    }return 0;
}

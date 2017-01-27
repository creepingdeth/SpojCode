#include<iostream>
using namespace std;
int main()
{
    int t,i,n;
    long unsigned int f=1;
    cin>>t;
    for(int j=0;j<t;j++)
    {cin>>n;
    for(i=1;i<=n;i++)
        f=f*i;
    cout<<f<<endl;
    f=1;}
    return 0;
}

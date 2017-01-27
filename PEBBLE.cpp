#include<iostream>
using namespace std;
int main()
{
    int a[10000],t,i,j,c,n,l;
    cin>>t;

    for(i=0;i<t;i++)

    {


    l=0;cin>>a[l];c=0;
    while(a[l]!='\0')
    {l++;
    cin>>a[l];
    }

   /* n=sizeof(a)/sizeof(a[0]); cout<<"size of aray n="<< l<<endl;
    for(j=0;j<n;j++)

        if(a[j]==1)
        {
          a[j]=0;c++;for(int k=j+1;k<n;k++) a[k]=(!a[k]);
        }

    cout<<"Game #"<<i+1<<": "<<c<<endl;





    }*/
    return 0;
}

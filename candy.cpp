#include <iostream>
#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int i,j,temp,price=0,n;
  for(int k=0;k<(k+1) ;k++)
  {
      cin>>n;
      if(n!=0)
      {
          long long int c[n],p[n];
          for(i=0;i<n;i++)
            scanf("%lld",&c[i]);//cin>>c[i];
            for(i=0;i<n;i++)
                scanf("%lld",&p[i]);//cin>>p[i];
           /* for(i=1;i<n;i++)
                for(j=0;j<n-1;j++)
                if(c[j]>c[j+1])
                {
                    temp=c[i];
                    c[i]=c[i+1];
                    c[i+1]=temp;

                }

          for(i=1;i<n;i++)
                for(j=0;j<n-1;j++)
                if(p[j]<p[j+1])
                {
                 temp=p[i];
                    p[i]=p[i+1];
                    p[i+1]=temp;

                }*/
                sort(c,c+n);
                sort(p,p+n,greater<long long int>());
                for(i=0;i<n;i++)
                    price=price+(c[i]*p[i]);
                    printf("%lld\n",price);//cout<<price<<endl;
                    price=0;
      }
      else break;

      }
      return 0;
  }



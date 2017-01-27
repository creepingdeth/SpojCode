#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{  int a=0,i,j;
    char str[100];
    cin.getline(str,100);
    //for(j=0;j!='\n';j++)
      //  cout<<str[j];
   /*for(j=0;str[j]!='\n';j++)
{i=j+1;
while(str[i]!='\n')
{
 if(str[j]==str[i]) str[i]='*' ; i++;
}
}*/
//for(j=0;str[j]!='\n';j++)
 cout<<sizeof(str)/sizeof(str[0]);
//for(j=0;j!='\n';j++)
//{
   //if(str[j]=='*') ++a;
//}
//printf("%lld result is ",a);
    return 0;
}

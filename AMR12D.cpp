#include<stdio.h>
#include<string.h>
int main()
{


int t,i,flag,l;
char s[11];
scanf("%d",&t);
while(t--)
{
    flag=0;
    scanf("%s",&s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if((s[i]!=s[l-i-1])){ flag=1;}
    }
    if(flag==0)
        printf("YES\n");
    else printf("NO\n");
}
return 0;
}

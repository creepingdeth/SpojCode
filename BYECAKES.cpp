#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    int e,f,s,m,e1,s1,m1,f1,e2,f2,s2,m2;
    int l;
    scanf("%d%d%d%d%d%d%d%d",&e,&f,&s,&m,&e1,&f1,&s1,&m1);
    while(e>-1 && f>-1 && s>-1 && m>-1 && e1>-1 && f1>-1 && s1>-1 && m1>-1)
    {
    e2=ceil((float)e/e1);
    f2=ceil((float)f/f1);
    s2=ceil((float)s/s1);
    m2=ceil((float)m/m1);
    l=max(max(e2,f2),max(s2,m2));
    printf("%d %d %d %d\n",l*e1-e,l*f1-f,l*s1-s,l*m1-m);
    scanf("%d%d%d%d%d%d%d%d",&e,&f,&s,&m,&e1,&f1,&s1,&m1);
    }

    return 0;
}

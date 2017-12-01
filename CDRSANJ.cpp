#include<stdio.h>
int main()
{
    int x,c=0;
    scanf("%d",&x);
    if(x==0)
    {
        printf("0");
        return 0;
    }
        if(x==1)
    {
        printf("1");
        return 0 ;
    }
    while(x%2==0 && x>1)
    {
        ++c;
        x=x/2;
    }
    printf("%d",c*2);

    return 0;
}

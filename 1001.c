#include<stdio.h>

int main()
{
    int t,i,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        if(n<=10)
            printf("%d %d\n",0,n);
        else
            printf("%d %d\n",10,n-10);
    }
    return 0;
}

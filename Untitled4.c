#include<stdio.h>
int main()
{
    int n,i,a,b,c,x;

    scanf("%d",&n);
    for(i=n;i>=1;i=i/2)
    {
        x=n%2;
        printf("%d\n",x);

    }


    return 0;
}

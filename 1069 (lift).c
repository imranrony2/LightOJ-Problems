#include<stdio.h>

int main()
{
    int t,i,a,b,d,r;
    scanf("%d",&t);

    for(i=1;i<=t;i+=1)
    {
        scanf("%d%d",&a,&b);
        d=b-a;
        if(b<a)
            d=d*(-1);
        r=(d*4)+(a*4)+19;
        printf("Case %d: %d\n",i,r);
    }

    return 0;
}

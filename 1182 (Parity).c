#include<stdio.h>

int main()
{
    int t,i;
    long long int n,j,c;
    scanf("%d",&t);
    for(i=1;i<=t;i+=1)
    {
        c=0;
        scanf("%lld",&n);
        for(j=n;j>=1;j/=2)
        {
            c=c+(j%2);
        }
        if(c%2==0)
        printf("Case %d: even\n",i);
        else
        printf("Case %d: odd\n",i);
    }
}

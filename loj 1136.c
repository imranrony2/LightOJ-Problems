#include<stdio.h>

int main()
{
    long long int t,i,a,b,s=0,j,k=1,c=0;
    scanf("%lld",&t);
    for (i=1;i<=t;i++)
    {
        scanf("%lld%lld",&a,&b);
        for(j=a;j<=b;j++)
        {
            s=s+j;
            if(s%3==0)
            {
                c=c+1;
            }

        }
        printf("Case %lld: %lld\n",i,c);
        c=0;
    }
    return 0;
}

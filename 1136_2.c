#include<stdio.h>

int main()
{
    long long int t,i,a,b,c=0;
    scanf("%lld",&t);
    for (i=1;i<=t;i++)
    {
        scanf("%lld%lld",&a,&b);
        if(a%3==0)
            {
                a=a+1;
                c=c+1;
            }
         if(a%3==2)
            {
                a=a+2;
                c=c+2;
            }
        if(b%3==0)
            {
                b=b-2;
                c=c+2;
            }
        if(b%3==2)
            {
                b=b-1;
                c=c+1;
            }
        printf("Case %lld: %lld\n",i,((b-a)*2)/3+c);
        c=0;
    }
    return 0;
}


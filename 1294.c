#include<stdio.h>

int main()
{
   long long int t,i,j,m,n;
    scanf("%lld",&t);

    for(i=1;i<=t;i++)
    {

            scanf("%lld%lld",&n,&m);


            printf("Case %lld: %lld\n",i,(n/2)*m);



    }
    return 0;
}

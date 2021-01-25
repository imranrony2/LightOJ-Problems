#include<stdio.h>

int main()
{
    long long int t,i,j,w,m,n,f;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&w);
        f=0;
        if(w%2!=0)
            f=0;

        else
        {

            for(j=2;j<=w/2;j*=2)
            {

                if((w/j)%2!=0)
                {
                     printf("Case %lld: %lld %lld\n",i,w/j,j);
                     f=1;
                     break;
                }

            }
        }

               if(f==0)
               {
                   printf("Case %lld: Impossible\n",i);
               }

    }

    return 0;
}

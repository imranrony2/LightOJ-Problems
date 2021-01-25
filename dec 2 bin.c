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
            c=((j%2)*10)+c;

        }

        printf("Case %d: %lld\n",i,c);
    }
}

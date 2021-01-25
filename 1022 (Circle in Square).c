#include<stdio.h>
#include<math.h>

int main()
{
    int t,i;
    double r,s,pi;
    scanf("%d",&t);
    for(i=1;i<=t;i+=1)
    {
        pi=2 * acos (0.0);
        scanf("%lf",&r);
        s=(4.0-pi)*r*r;
        printf("Case %d: %.2lf\n",i,s);
    }
    return 0;
}


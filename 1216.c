#include<stdio.h>
#include<math.h>

int main()
{
    int t,i;
    double v,pi,r1,r2,r,d,h,p;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        pi=2 * acos (0.0);
        scanf("%lf%lf%lf%lf",&r1,&r2,&h,&p);

        d=(r1-r2)/h;
        r=r2+(d*p);
        v=p*(pi/3.0)*(r2*r2+r*r2+r*r);

        printf("Case %d: %.8lf\n",i,v);

    }

    return 0;
}

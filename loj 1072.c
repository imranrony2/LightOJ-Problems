#include<stdio.h>
#include<math.h>
#define Pi 3.14159265

int main()
{
    int i;
    double t,r1,r2,n,a;
    scanf("%lf",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%lf %lf",&r1,&n);
        a= sin (Pi/n);
        r2=(r1*a)/(1+a);
        printf("Case %d: %.8lf\n",i,r2);
    }
    return 0;
}

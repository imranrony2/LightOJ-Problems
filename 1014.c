#include<stdio.h>

int main()
{
    int t,i,p,l,j,d,r;
    scanf("%d",&t);

    for(i=1;i<=t;i+=1)
    {
        scanf("%d%d",&p,&l);
        d=p-l;
        if(d<l)
        {
            printf("Case %d: impossible",i);
        }
        else
        {
            printf("Case %d: ",i);
            for(j=d/l;j>=1;j--)
                printf("%d",d/j);
        }
    }

    return 0;
}


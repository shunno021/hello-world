#include<stdio.h>
int main()
{
    int i,n;
    double u,v,t,a,s;
    i=1;
    while(scanf("%d",&n)==1&&n) {
        if(n==1)    {
            scanf("%lf %lf %lf",&u,&v,&t);
            a=(v-u)/t;
            s=(u*t)+(.5*a*t*t);
            printf("Case %d: %.3lf %.3lf\n",i,s,a);
        }
        else if(n==2)   {
            scanf("%lf %lf %lf",&u,&v,&a);
            t=(v-u)/a;
            s=(u*t)+(.5*a*t*t);
            printf("Case %d: %.3lf %.3lf\n",i,s,t);
        }
        else if(n==3)   {
            scanf("%lf %lf %lf",&u,&a,&s);
            v=sqrt((u*u)+(2*a*s));
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i,v,t);
        }
          else if(n==4)   {
            scanf("%lf %lf %lf",&v,&a,&s);
            u=sqrt((v*v)-(2*a*s));
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i,u,t);
        }
        i++;
    }
    return 0;
}

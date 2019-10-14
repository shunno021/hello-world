#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int g,m,n,c,t,r,tc,i;

    scanf("%d",&tc);

    for(i=1;i<=tc;i++)  {
        scanf("%d",&g);

        m=g*g;
        n=g;
        c=0;

        while(n>=g)    {
            t=0;
            while(m)    {
                r=m%10;
                t=t+(r*r);
                m/=10;
            }
            n=t;
            m=t;
            if(n==1)    {
                c=1;
                break;
            }
        }
        if(c==1)    printf("Case #%d: %d is a Happy number.\n",i,g);
        else printf("Case #%d: %d is an Unhappy number.\n",i,g);

    }
    return 0;
}

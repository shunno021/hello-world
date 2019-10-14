#include<iostream>
#include<cstdio>

using namespace std;
int main()
{
    ///freopen("uva_11364.txt","r",stdin);

    int t,i,j,n,s,ld,sd,fd;

    scanf("%d",&t);

    for(i=1;i<=t;i++)   {
        ld=1000;
        sd=-1;
        scanf("%d",&n);

        for(j=1;j<=n;j++)   {
            scanf("%d",&s);
            if(s<ld)    ld=s;
            if(s>sd)    sd=s;
        }

        fd=2*(sd-ld);
        printf("%d\n",fd);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int n,previous,collect,need,i,T,t,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++)   {
        scanf("%d %d %d",&previous,&collect,&need);
        m=previous+collect;
        T=0;
        while(m>=need)    {
            t=m/need;
            T=T+t;
            m=t+(m%need);
        }
        printf("%d\n",T);
    }
    return 0;
}

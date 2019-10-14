#include<stdio.h>
int main()
{
    int test,i,l,sum,j,k;
    scanf("%d",&test);
    for(i=1;i<=test;i++)    {
        scanf("%d%d",&j,&k);
        sum=0;
        for(l=j;l<=k;l++)   {
            if(l%2) sum=sum+l;
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}

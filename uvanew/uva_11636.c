#include<stdio.h>
int main()
{
    int n,i,j,k;
    for(i=1;scanf("%d",&n)==1;i++)  {
        if(n<0) break;
        k=0;
        for(j=1;j<n;)   {
           k=k+1;
           j=j+j;
        }
        printf("Case %d: %d\n",i,k);
    }

    return 0;
}

#include<stdio.h>
int main()
{
    int i,j,k,n,m;
    scanf("%d",&n);

    for(m=1;m<=n;m++)   {
        scanf("%d%d%d",&i,&j,&k);
        if((i>j)&&(j>k))    printf("Case %d: %d\n",m,j);
        else if((i<j)&&(j<k))   printf("Case %d: %d\n",m,j);
        else if((i<j)&&(k<i))   printf("Case %d: %d\n",m,i);
        else if((i>j)&&(i<k))   printf("Case %d: %d\n",m,i);
        else if((k>i)&&(j>k))   printf("Case %d: %d\n",m,k);
        else printf("Case %d: %d\n",m,k);

    }
    return 0;
}

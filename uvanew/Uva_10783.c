#include<stdio.h>
int main()
{
    int i,n,st,nd,j,sum;
    scanf("%d",&n);

    for(i=1;i<=n;i++)   {
     scanf("%d\n%d\n",&st,&nd);
        sum=0;
        for(j=st;j<=nd;j++) {
            if(j%2)  {
                sum=sum+j;
            }
        }
        printf("Case %d: %d\n",i,sum);

    }
    return 0;
}

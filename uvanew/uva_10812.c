#include<stdio.h>
int main()
{
    int s1,s2,t,d,n,i;
    scanf("%d",&n);
    while(n--)  {
        scanf("%d%d",&t,&d);
        if(t>=d&&(t+d)%2==0)  {
            s1=(t+d)/2;
            s2=(t-d)/2;
            printf("%d %d\n",s1,s2);
        }
        else printf("impossible\n");
    }
    return 0;
}

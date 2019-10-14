#include<stdio.h>
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)==2)   {
        int tm=(n*m)-1;
        printf("%d\n",tm);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int n,nn,sm;
    while(scanf("%d",&n)==1&&n!=0)  {
        nn=n;
        while(nn/10>0)  {
            sm=0;
            while(n)    {
                sm=sm+n%10;
                n=n/10;
            }
            nn=sm;
            n=nn;
        }
        printf("%d\n",nn);
    }
    return 0;
}

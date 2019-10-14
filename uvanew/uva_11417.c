#include<stdio.h>
int main()
{
    int n,i,j,g;
    while(scanf("%d",&n)==1&&n) {
        g=0;
        for(i=1;i<n;i++)    {
            for(j=i+1;j<=n;j++) {
                g+=Gcd(i,j);
            }
        }
        printf("%d\n",g);
    }
    return 0;
}
int Gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return Gcd(b,a%b);
}

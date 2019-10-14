#include<stdio.h>
#include<math.h>
int main()
{
    double N,n;
    int i=1;
    while(scanf("%lf",&N)==1&&N)   {
        n=ceil((sqrt(9+(8*N))+3)/2);
        printf("Case %d: %.0lf\n",i,n);
        i++;
    }
    return 0;
}

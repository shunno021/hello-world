#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,j,k;
    while(scanf("%d%d",&a,&b)==2 && (a!=0 && b!=0)) {
        k=0;
        for(i=a;i<=b;i++)   {
            j=pow(i,2);
            if(j>=a && j<=b) k++;
        }
        printf("%d\n",k);
    }
    return 0;
}

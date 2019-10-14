#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,j,k;
    while(scanf("%d%d",&a,&b)==2 && (a!=0 && b!=0)) {
          k=0;
        for(i=a;i<=b;i++)   {
            j=sqrt(i);
            if(j*j==i)  k++;
        }
        printf("%d\n",k);
    }
    return 0;
}

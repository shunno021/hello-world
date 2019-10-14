#include<stdio.h>
int main()
{
    long int a[102];
    int n,i,t,j;
    while(scanf("%ld",&n)==1&&n) {
        for(i=0;i<n;i++)    {
            scanf("%ld",&a[i]);
        }
        for(i=0;i<n-1;i++)  {
            for(j=n-1;j>i;j--)  {
                if(a[i]>a[j]) {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
            }
        }
        for(i=0;i<n;i++)    {
            printf("%ld ",a[i]);
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int t,i;
    long int a,b,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++)   {
        scanf("%ld %ld %ld",&a,&b,&c);
        if(((a+b)>c&&(a+c)>b&&(b+c)>a)&&(a&&b&&c))    {
            if(a==b&&b==c)  printf("Case %d: Equilateral\n",i);
            else if((a==b&&b!=c)||(a==c&&c!=b)||(b==c&&c!=a))   {
                printf("Case %d: Isosceles\n",i);
            }
            else    printf("Case %d: Scalene\n",i);
        }
        else printf("Case %d: Invalid\n",i);
    }
    return 0;
}

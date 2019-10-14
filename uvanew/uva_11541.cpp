#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    int t,i,l,c;
    char a[202];

    scanf("%d",&t);

    for(i=1;i<=t;i++)   {
        scanf("%s",a);
        l=strlen(a);

        printf("Case %d: ",i);

        for(int j=0;j<l;j++)    {
            if((a[j]>='A'&&a[j]<='Z')&&(a[j+1]>=48&&a[j+1]<=57))    {
                if((a[j+2]>=48&&a[j+2]<=57))  {
                    if((a[j+3]>=48&&a[j+3]<=57))  {
                        c=((100*(a[j+1]-48))+(10*(a[j+2]-48))+(a[j+3]-48));
                    }
                    else c=((10*a[j+1]-48)+(a[j+2]-48));
                }
                else c=a[j+1]-48;

            }
             printf("%d\n",c);
                while(c)    {
                    printf("%c",a[j]);
                    c--;
                }
        }
        printf("\n");
    }
    return 0;
}

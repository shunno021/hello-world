#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char a[22];
    int n,i,sn,c,l;
    while(scanf("%s",a)!=EOF)   {
        l=strlen(a);
        n=0;
        for(i=0;i<l;i++)    {
            if('a'<=a[i]&&'z'>=a[i])    {
                n=n+(a[i]-96);
            }
            else if('A'<=a[i]&&'Z'>=a[i])   {
                n=n+(a[i]-38);
            }
        }
        sn=sqrt(n);
        c=1;
        for(i=2;i<=sn;i++)  {
            if(n%i==0)  {
                c=0;
                break;
            }
        }
        if(c==1)    printf("It is a prime word.\n");
        else    printf("It is not a prime word.\n");
    }
    return 0;
}

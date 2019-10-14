#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
int mabs(int a);

using namespace std;

int main()
{
    freopen("uva_10929.txt","r",stdin);


    char a[1002];
    int t1,t2,d;
    int l,i;
    while(scanf("%s",a)==1)   {
        l=strlen(a);
        if(a[0]=='0'&&l==1)    break;
        t1=t2=0;
        for(i=0;i<l;i++)    {
            if(i%2==0)  {
                t1=t1+(a[i]-'0');
            }
            else  t2=t2+(a[i]-'0');
        }
        d=mabs(t1-t2);
        if(d%11==0) printf("%s is a multiple of 11.\n",a);
        else printf("%s is not a multiple of 11.\n",a);

    }
    return 0;
}
int mabs(int a)
{
    if(a>0) return a;
    else return ((-1)*a);
}

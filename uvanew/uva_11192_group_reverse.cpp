#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
    //freopen("uva_11192.txt","W",stdin);

    int n,G,lw,l,h,H,c;
    char a[100];

    while(1)    {
        scanf("%d",&n);
        getchar();
        if(n==0)    break;
        gets(a);

        l=strlen(a);
        G=l/n;
        H=G;
        c=0;
        lw=0;
        h=G;

        while(1)   {
            printf("%c",a[h-1]);
            h--;
            c++;
            if(c==l)    break;
            if(h==lw)   {
                h=H+G;
                lw=H;
                H=H+G;
            }
        }
        printf("\n");
    }
    return 0;
}

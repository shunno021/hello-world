#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    int t,i,j,la,lb,k,k1;
    char a[21],b[21],c[21],d[21];
    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++)   {
        gets(a);
        gets(b);
        la=strlen(a);
        lb=strlen(b);

            k=0;
            k1=0;
            for(int j=0;j<la;j++)   {
                if(a[j]!='a'||a[j]!='e'||a[j]!='i'||a[j]!='o'||a[j]!='u')   {
                    c[k]=a[j];
                    k++;
                }

                if(b[j]!='a'||b[j]!='e'||b[j]!='i'||b[j]!='o'||b[j]!='u')   {
                    c[k1]=b[j];
                    k1++;
                }
            }
        if(la!=lb)  printf("No\n");
        if(!strcmp(c,d))  printf("Yes\n");
    }
    return 0;
}

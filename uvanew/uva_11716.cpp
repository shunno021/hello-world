#include<cstdio>
#include<cstring>
#include<cmath>



using namespace std;

int main()
{
    int t;
    char a[10004],b[104][104];
    scanf("%d",&t);
    for(int k=1;k<=t;k++)   {
        gets(a);
        int l=strlen(a);
        int s=sqrt(l);
        if(s*s!=l)  printf("INVALID\n");
        else {
            int c=0;
            for(int i=0;i<s;i++)    {
                for(int j=0;j<s;j++) {
                    if(c==l)  break;
                    b[i][j]=a[c];
                    c++;
                }
            }

            for(int i=0;i<s;i++)    {
                for(int j=0;j<s;j++)    {
                    printf("%c",b[j][i]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}


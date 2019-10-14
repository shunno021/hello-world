#include<bits/stdc++.h>
using namespace std;

int a[10000];
map<int,int>m;

int main()
{
    freopen("uva_11057in.txt","r",stdin);
    freopen("uva_11057out.txt","w",stdout);

    int n,price;

    while(scanf("%d",&n)!=EOF)  {
        for(int i=0;i<n;i++)    {
            scanf("%d",&a[i]);
            m[a[i]]++;
        }

        scanf("%d",&price);

        int min=1e9,b1,b2,d,df;

        for(int i=0;i<n;i++)    {
            if((price-a[i])==a[i]&&m[i]==2)   {
                b1=a[i];
                b2=a[i];
                break;
            }
            else    {
                d=price-a[i];
                if(m[d]>0)  {
                    df=abs((a[i]-d));
                    if(df<min)  {
                        min=df;
                        b1=d;
                        b2=a[i];
                    }
                }
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n",b1,b2);
        printf("\n");

    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

#define N (int) 1e8

bool a[N];

int b[N];

void siv()
{
    int l=sqrt(N*1.0)+1;

    a[0]=a[1]=1;

    for(int i=4;i<=N;i+=2)  {
        a[i]=1;
    }

    for(int i=3;i<=N;i+=2)  {
        if((!a[i])) {

            if(i<=l)    {
                for(int j=i*i;j<=N;j+=i*2)  {
                    a[j]=1;
                }
            }
        }
    }
}

void list()
{
    int k=0;
    b[k++]=2;
    for(int i=3;i<=N;i+=2)  {
        if(!a[i])   {
            b[k++]=i;
        }
    }
}

int main()
{
    int n,limit,x,y;

    siv();

    while(scanf("%d",&n)==1 && n)   {

        //limit=n/2 +1;
        for(int i=2;i<=n;i++)   {
            if((b[i]+b[n-i]==n)&&(b[n-i]!=0))  {
                x=b[i];
                y=b[n-i];
                break;
            }
        }
        printf("%d:\n%d+%d\n",n,x,y);
    }
    return 0;
}

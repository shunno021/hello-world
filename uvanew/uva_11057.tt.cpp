#include<bits/stdc++.h>
using namespace std;

int a[10002];


int b_search(int hi,int Q)
{
    int lo=0,mid;

    while(lo<=hi)   {

        mid=(lo+hi)/2;

        if(a[mid]==Q)   return 1;

        else if(Q<a[mid])   hi=mid-1;

        else hi=mid+1;
    }
    return 0;
}


int main()
{
    //freopen("uva_11057in.txt","r",stdin);
    //freopen("uva_11057out.txt","w",stdout);


    int N,m,df,x,y,df_xy;

    while(scanf("%d",&N)!=EOF)  {

        for(int i=0;i<N;i++)    {
            scanf("%d",&a[i]);
        }

        scanf("%d",&m);

        sort(a,a+N);

        df_xy=1000001;

        for(int i=0;i<N;i++)    {
            df=m-a[i];

            if(b_search(N-1,df)&&(abs(a[i]-df)<df_xy))    {

                df_xy=abs(a[i]-df);

                if(a[i]>df) {
                    x=df;
                    y=a[i];
                }
                else    {
                    x=a[i];
                    y=df;
                }

            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n",x,y);

    }
    return 0;
}

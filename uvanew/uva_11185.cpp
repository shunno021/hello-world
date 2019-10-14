#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    ///freopen("uva_11185.txt","r",stdin);

    long long int n,i,j;
    long long int a[101];

    while(scanf("%lld",&n)==1&&n>0)   {

        i=0;
        while(n)    {

            a[i]=n%3;
            n/=3;
            i++;
        }
        for(j=i-1;j>=0;j--) {
            printf("%lld",a[j]);
        }
        printf("\n");
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll a[100000000],n;

int main()
{
    while(scanf("%lld",&n)==1 && n) {
        for(ll i=0;i<n;i++) {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);

        for(ll i=0;i<n;i++) {
            if(i<n-1)   {
                printf("%d ",a[i]);
            }
            else printf("%d",a[i]);
        }
        printf("\n");
    }
    return 0;
}


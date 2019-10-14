#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll n,m,a,r,rr,ans;

    cin>>n>>m>>a;

    r=n/a;
    if(n%a!=0)  r++;
    rr=m/a;
    if(m%a!=0)  rr++;
    ans=r+rr;
    cout<<ans<<endl;

    return 0;
}

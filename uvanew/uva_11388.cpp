#include<iostream>
#include<cstdio>

using namespace std;

long long gcd(long n,long p)
{
    if(p==0)    return n;
    if(n%p==0)  return p;
    return gcd(p,n%p);
}


int main()
{
    long long t,n1,n2,g,l;
    scanf("%lld",&t);
    for(long long i=1;i<=t;i++)   {
        scanf("%lld %lld",&n1,&n2);
        g=gcd(n1,n2);
        l=(n1*n2)/g;

        if(g==n1&&l==n2)    printf("%lld %lld\n",g,l);
        else printf("-1\n");
    }
    return 0;
}

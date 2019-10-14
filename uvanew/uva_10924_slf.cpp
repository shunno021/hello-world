#include<bits/stdc++.h>

using namespace std;


bool IsPrime(int n)
{
    if(n<1)    return 0;
    for(int i=2;i*i<=n;i++) {
        if(n%i==0)  {
            return 0;
        }
    }
    return 1;
}


int main()
{
    char s[25];
    int l,sm;

    while(scanf("%s",s)!=EOF)   {

        l=strlen(s);

        sm=0;

        for(int i=0;i<l;i++)    {
            int m;
            if(s[i]>='a'&& s[i]<='z')   {
                m=s[i]-'a'+1;
            }
            if(s[i]>='A'&&s[i]<='Z')    {
                m=s[i]-'A'+27;
            }
            sm=sm+m;
        }

        if(IsPrime(sm)) cout<<"It is a prime word."<<endl;
        else cout<<"It is not a prime word."<<endl;
    }
    return 0;
}


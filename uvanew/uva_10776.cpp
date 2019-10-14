#include<bits/stdc++.h>

using namespace std;
int n,l;
string s,r;
bool ck[1000];

void bk(int st)
{
    if(r.size()==n) {
        cout<<r<<endl;
        return;
    }

    for(int i=st;i<l;i++)   {


        if(!ck[i])  {

            if(s[i]<r[r.size()-1])  continue;

            r.push_back(s[i]);
            ck[i]=1;
            bk(st+1);
            r.pop_back();
            ck[i]=0;
        }
        while(s[i]==s[i+1]) i++;
    }
}



int main()
{
    while(cin>>s>>n)    {

        l=s.size();

        r.clear();
        memset(ck,0,sizeof(ck));
        sort(s.begin(),s.end());

        bk(0);
    }

    return 0;
}


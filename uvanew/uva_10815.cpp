
#include<bits/stdc++.h>

using namespace std;

int main()
{
    char in[205];


    set<string>s;


    while(gets(in))   {

        int l=strlen(in);

        for(int i=0;i<l;i++)    {
            if('A'<=in[i] && in[i]<='Z')    {
                in[i]=in[i]-'A'+'a';
            }
            if(!(isalpha(in[i])))   {
                in[i]=' ';
            }
        }

        istringstream iS(in);

        string w;

        /// Most attractive feature of c++

        while(iS>>w)   {
            s.insert(w);
        }

    }

    for(string Fs:s)    {
        printf("%s\n",Fs.c_str());
    }


    return 0;
}

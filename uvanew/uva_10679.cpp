#include<bits/stdc++.h>

using namespace std;


vector<int> zFunction (string s) {
	int n = (int) s.length();
	vector<int> z (n);
	for (int i=1, l=0, r=0; i<n; ++i) {
		if (i <= r)
			z[i] = min (r-i+1, z[i-l]);
		while (i+z[i] < n && s[z[i]] == s[i+z[i]])
			++z[i];
		if (i+z[i]-1 > r)
			l = i,  r = i+z[i]-1;
	}
	return z;
}



int main()
{
    int t,q;

    string s,s1,ss;

    cin>>t;

    while(t--)  {

        cin>>s;
        cin>>q;
        int a[q+2];
        ss=s;
        int i=1;
        int qq=q;

        while(qq--)  {
            ss+="#";
            cin>>s1;
            ss+=s1;
            int s1l=s1.size();
            //cout<<s1l<<' ';
            a[i]=s1l;
            //cout<<a[i]<<' ';
            i++;
        }
        //cout<<'*'<<endl;
        //cout<<ss<<endl;
        //for(int i=1;i<=q;i++)   cout<<a[i]<<' ';
        vector<int>v=zFunction(ss);

        qq=q;
        int p=s.size()+1;
        i=1;
        while(qq--) {
            if(v[p]==a[i])  {
                cout<<'y'<<endl;
            }
            else cout<<'n'<<endl;
            p=p+a[i]+1;
        }

    }
    return 0;
}

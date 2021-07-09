#include <bits/stdc++.h>
#define ll long long
using namespace std;
void subset(string s,vector<string> &str,int n,int pow_set)
{
    for(int i=0;i<pow_set;++i)
    {
        string x;
        for(int j=0;j<n;++j)
        {
            if(i&1<<j)
            {
                x+=s[j];
            }
        }
        if(i!=0)
            str.push_back(x);
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<string> str;
        int pow_set=pow(2,n);
        subset(s,str,n,pow_set);
        sort(str.begin(),str.end());
        for(int i=0;i<str.size();++i)
        {
            cout<<str[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
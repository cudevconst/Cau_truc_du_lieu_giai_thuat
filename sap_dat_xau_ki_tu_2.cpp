#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        string str;
        cin>>str;
        int d[26]={0};
        int Max=0;
        for(int i=0;i<str.size();++i)
        {
            d[str[i]-'A']++;
            Max=max(Max,d[str[i]-'A']);
        }
        if((Max-1)*(k-1)+Max>str.size())//khoảng cách giữa 2 kí tự max là k-1. Có Max-1 lhoảng cách
        cout<<-1<<endl;
        else cout<<1<<endl;
    }
}
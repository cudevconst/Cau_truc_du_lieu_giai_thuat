#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int k;
       
        string str;
        cin>>str;
        int d[26]={0};
        int Max=0;
        for(int i=0;i<str.size();++i)
        {
            d[str[i]-'a']++;
            Max=max(Max,d[str[i]-'a']);
        }
        if(str.size()%2==0 and Max<=str.size()/2)
        cout<<1<<endl;
        else if(str.size()%2!=0 and Max<=(str.size()/2+1))cout<<1<<endl;
        else cout<<-1<<endl;
    }
}
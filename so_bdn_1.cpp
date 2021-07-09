#include <bits/stdc++.h>
using namespace std;
void tao(long long n)
{
    queue<string> q;
    q.push("1");
    int cnt=0;
    while(1){
        string s1=q.front();
        string s2=s1;
        q.pop();
        long long sum=0;
        for(int i=0;i<s1.size();++i){
            sum=sum*10+(s1[i]-'0');
        }
        if(sum<=n)
        {
            cnt++;
            q.push(s1+"0");
            q.push(s2+"1");
        }
        else 
        break;
        
    }
    cout<<cnt<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        tao(n);
        
    }
    return 0;
}
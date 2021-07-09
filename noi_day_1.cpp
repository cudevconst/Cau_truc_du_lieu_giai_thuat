#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll m=1e9+7;

int main()
{
    int t;
    cin>>t;
    while(t--){
    
        int n;
        cin>>n;
        ll val;
        priority_queue<ll, vector<ll>, greater<ll>> q;
        for(int i=0;i<n;++i)
        {
           cin>>val;
            q.push(val);
        }
        ll res=0;
        while(q.size()>1)
        {
            long long x=q.top();q.pop();
            ll y=q.top();q.pop();
            ll tmp=(x+y);
            q.push(tmp);
            res+=tmp;
            
        }
        cout<<res<<endl;
}
}
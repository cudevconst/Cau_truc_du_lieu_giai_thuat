#include <bits/stdc++.h>
using namespace std;
int a[11],n,k,ok;
int c[11];

void ql(int i)
{
    if(i==n)
    {
        int sum=0;
        for(int i=0;i<n;++i)
        {
            sum+=a[i]*c[i];
        }
        if(sum==k)
        {
            vector<int>v;
           
            cout<<"[";
            for(int i=0;i<n;++i)
            {
                if(c[i] )
                v.push_back(a[i]);
                
            }
            for(int i=0;i<v.size()-1;++i)
            {
                cout<<v[i]<<" ";
            }
            cout<<v[v.size()-1]<<"]"<<" ";
            ok=1;
        }
        return;
    }
    c[i]=1;
    ql(i+1);
    c[i]=0;
    ql(i+1);
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ok=0;
        cin>>n>>k;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ql(0);
    if(ok==0)
    {
        cout<<"-1";
    }
    cout<<endl;
    }    
    return 0;
}
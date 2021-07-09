#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> ke[1005];
bool ok[1005];
int truoc[1005];
int x,y,u,v;
void DFS (int u, int v)
{
    queue<int> q;
    q.push(u);
    while(q.size()>0)
    {
        int top=q.front();q.pop();
        ok[top]=true;
        if(ok[v])
        {
            cout<<"YES\n";
            return;
        }
        for(int i=0;i<ke[top].size();++i)
        {
            if(!ok[ke[top][i]])
            {
                ok[ke[top][i]]=1;
                truoc[ke[top][i]]=top;
                q.push(ke[top][i]);
            }
        }
    }
    cout<<"NO\n";
    
}

int main()
{
   
       int t;
       cin>>t;
       while(t--)
       {
           for(int i=0;i<1001;++i)
           {
               ke[i].clear();
           }
           cin>>x>>y;
           for(int i=0;i<y;++i)
           {
               int a,b;
               cin>>a>>b;
               ke[a].push_back(b);
               ke[b].push_back(a);
           }
           int k;
           cin>>k;
           while(k--)
           {
               memset(ok,0,sizeof(ok));
               cin>>u>>v;
               DFS(u,v);
           
           }
       }
        
    

    return 0;
}
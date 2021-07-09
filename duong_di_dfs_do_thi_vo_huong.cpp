#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> ke[1005];
bool ok[1005];
int truoc[1005];
int x,y,u,v;
void DFS (int u, int v)
{
    if(ok[v])
        return;
    ok[u]=1;
    for(int i=0;i<ke[u].size();++i)
    {
        if(!ok[ke[u][i]])
        {
            ok[ke[u][i]]=1;
            truoc[ke[u][i]]=u;
            DFS(ke[u][i],v);
        }
    }
    
}
void out()
{
    if(!ok[v])
    {
        cout<<-1<<endl;
        return;
    }
    vector<int> res;
    while(u!=v)
    {
        res.push_back(v);
        v=truoc[v];
    }
    res.push_back(u);
    for(int i=res.size()-1;i>=0;--i)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;
}
void CL()
{
    for(int i=0;i<1001;++i)
    {
        ke[i].clear();
    }
    memset(ok,0,sizeof(ok));
}
int main()
{
   
       int t;
       cin>>t;
       while(t--)
       {
           CL();
           cin>>x>>y>>u>>v;
           for(int i=0;i<y;++i)
           {
               int a,b;
               cin>>a>>b;
               ke[a].push_back(b);
               ke[b].push_back(a);
           }
           DFS(u,v);
           out();
       }
        
    

    return 0;
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> ke[1005];
bool ok[1005];
int truoc[1005];
int x,y,u,v;
void BFS (int u, int v)
{
     queue<int> q;
    q.push(u);
    {
        while(q.size()>0)
        {
            int top=q.front();q.pop();
            ok[top]=1;
            if(ok[v])
                return;
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
           BFS(u,v);
           out();
       }
        
    

    return 0;
}
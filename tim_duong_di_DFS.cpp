#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> ke[1005];
bool ok[1005];
int truoc[1005];
void DFS(int u,int v)
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
int main()
{
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<1001;++i)
        {
            ke[i].clear();
        }
        memset(ok,0,sizeof(ok));
        int a,b,u,v;
        cin>>a>>b>>u>>v;
        for(int i=0;i<b;++i)
        {
            int x,y;
            cin>>x>>y;
            ke[x].push_back(y);
        }
        DFS(u,v);
        if(!ok[v])
            cout<<-1<<endl;
        else{
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
    }

    return 0;
}
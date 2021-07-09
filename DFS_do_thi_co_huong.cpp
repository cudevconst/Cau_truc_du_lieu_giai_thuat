#include <bits/stdc++.h>

using namespace std;
vector<int> ke[1005];
bool ok[1005];
void DFS(int u)
{
    ok[u]=true;
    cout<<u<<" ";
    for(int i=0;i<ke[u].size();++i)
    
        if(!ok[ke[u][i]])
            DFS(ke[u][i]);
    
}
int main()
{

    int t;
    cin >> t;
    
    while (t--)
    {
        for(int i=0;i<1000;++i)
        {
            ke[i].clear();
        }
        memset(ok,false,sizeof(ok));
        int a,b,dich;
        cin>>a>>b>>dich;
        for(int i=0;i<b;++i)
        {
            int u,v;
            cin>>u>>v;
            ke[u].push_back(v);
            
        }
        DFS(dich);
        cout<<"\n";
    }
    return 0;
}
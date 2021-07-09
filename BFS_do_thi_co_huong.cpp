#include <bits/stdc++.h>

using namespace std;
vector<int> ke[1005];
bool ok[1005];
void DFS(int u)
{
    stack<int> s;
    s.push(u);
    while(s.size()>0)
    {
        int top=q.front();q.pop();
        cout<<top<<" ";
        ok[top]=true;
        for(int i=0;i<ke[top].size();++i)
        {
            if(!ok[ke[top][i]])
            {
                ok[ke[top][i]]=true;
                q.push(ke[top][i]);
            }
        }
    }
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
        BFS(dich);
        cout<<"\n";
    }
    return 0;
}
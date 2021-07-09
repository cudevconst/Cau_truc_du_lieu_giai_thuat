#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> ke[1005];
bool ok[1005];
int truoc[1005];
int x, y, u, v;
void BFS(int u)
{
   queue <int> q;
   q.push(u);
   while(!q.empty())
   {
       int top=q.front();
       q.pop();
       ok[top]=1;
     
        for(int i=0;i<ke[top].size();++i)
        {
            if(!ok[ke[top][i]])
            {
                ok[ke[top][i]]=1;
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
        for (int i = 0; i < 1001; ++i)
        {
            ke[i].clear();
        }
        memset(ok,0,sizeof(ok));
        cin >> x >> y;
        for (int i = 0; i < y; ++i)
        {
            int a, b;
            cin >> a >> b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        int res=0;
        for(int i=1;i<=x;++i)
        {
            if(!ok[i])
            {
                res++;
                BFS(i);
            }
        }
        for(int i=1;i<=x;++i)
        {
            memset(ok,0,sizeof(ok));
            ok[i]=1;
            int dem=0;
            for(int j=1;j<=x;++j)
            {
                if(!ok[j])
                {
                    dem++;
                    BFS(j);
                }
            }
            if(dem>res)
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}
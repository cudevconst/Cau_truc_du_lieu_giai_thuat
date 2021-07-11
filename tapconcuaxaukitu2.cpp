#include <bits/stdc++.h>
using namespace std;
int n, k;
string s;
bool vis[16];


void backtrack (int idx, string res)
{
    if (res.size())
        cout << res << " ";
    for (int i=idx; i<n; i++)
    {
        if (!vis[s[i]-'a'])
        {
            vis[s[i]-'a'] = 1;
            backtrack (i+1,res+s[i]);
            vis[s[i]-'a'] = 0;
        }
    }
}

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        memset (vis, 0, sizeof(vis));
        string res = "";
        backtrack (0,"");
        cout << endl;
    }
}
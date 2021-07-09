#include <bits/stdc++.h>
using namespace std;
struct val
{
    int first;
    int second;
}; 
map<pair<int, int>, int> m;
int findMaxChainLen(struct val p[], int n,
                        int prev, int pos)
{
     

    if (m.find({ pos, prev }) != m.end())
    {
        return m[{ pos, prev }];
    }
 
    if (pos >= n)
        return 0;
    if (p[pos].first <= prev)
    {
        return findMaxChainLen(p, n, prev,
                                 pos + 1);
    }
 
    else
    {
        int ans = max(findMaxChainLen(p, n,
                             p[pos].second, 0) + 1,
                      findMaxChainLen(p, n,
                                   prev, pos + 1));
        m[{ pos, prev }] = ans;
        return ans;
    }
}

int maxChainLen(struct val p[], int n)
{
    m.clear();

    int ans = findMaxChainLen(p, n, 0, 0);
    return ans;
}
int main() 
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        struct val a[n];
        for(int i=0;i<n;++i)
        {
            cin>>a[i].first;
            cin>>a[i].second;
        }
        cout<<maxChainLen(a,n)<<endl;
        
    }
    return 0;
}
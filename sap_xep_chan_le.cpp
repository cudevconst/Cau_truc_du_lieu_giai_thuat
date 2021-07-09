#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int t;
    // cin>>t;
    // while(t--)
    // {
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; ++i)
    {
        vector<int> a;
        for(int j=1;j<=n;++j)
        {
            int so;
            cin>>so;
            if(so)
            a.push_back(j);
        }
        for(int j=0;j<a.size();++j)
        cout<<a[j]<<" ";
        cout<<endl;
    }
    vector<int> tang, giam;
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
            tang.push_back(a[i]);
        else
            giam.push_back(a[i]);
    }
    int t = 0, g = 0;
    sort(tang.begin(), tang.end());
    sort(giam.begin(), giam.end(), greater<int>());
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
            cout << tang[t++] << " ";
        else
            cout << giam[g++] << " ";
    }
    // }
    return 0;
}
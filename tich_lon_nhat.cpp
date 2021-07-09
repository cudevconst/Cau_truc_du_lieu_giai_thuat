#include <bits/stdc++.h>

using namespace std;

int main()
{   
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;++i)
        {
            cin>>a.at(i);
        }
        sort(a.begin(),a.end());
        long a2=0,a3=0,b2=0,b3=0,c31=0,c32=0;
        vector<int> v;
        v.push_back(a[0]*a[1]);
        v.push_back(a[n-1]*a[n-2]);
        v.push_back(a[0]*a[1]*a[n-2]);
        v.push_back(a[0]*a[1]*a[n-1]);
        v.push_back(a[n-1]*a[n-2]*a[n-3]);
        v.push_back(a[0]*a[n-1]*a[n-2]);
        cout<<*max_element(v.begin(),v.end());
    
  
    return 0;
}
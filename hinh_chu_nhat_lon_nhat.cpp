#include <bits/stdc++.h>
#define ll long long
using namespace std;
void getMaxArea(ll a[], int n)
{
    stack<int> s;
  
    long long ans = 0;
    int i = 0;
    while (i < n)
    {
        if (s.empty() || a[s.top()] <= a[i])
            s.push(i++);
        else
        {
            int tp = s.top(); 
            s.pop();
            long long ok;
            if(s.empty())
            {
                ok=a[tp]*i;
           }
           else ok=a[tp]*(i-s.top()-1);
           ans =max(ans,ok);

           
        }
    }
    while (!s.empty())
    {
        int tp = s.top(); 
            s.pop();
            long long ok;
            if(s.empty())
            {
                ok=a[tp]*i;
           }
           else ok=a[tp]*(i-s.top()-1);
           ans =max(ans,ok);
    }
  
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        getMaxArea(a,n);
    }

    return 0;
}ư
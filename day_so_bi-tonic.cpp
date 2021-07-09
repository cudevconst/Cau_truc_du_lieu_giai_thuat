#include <bits/stdc++.h>

using namespace std;
int res(int a[], int n)
{
    int Tang[n], Giam[n];
    for (int i = 0; i < n; ++i)
    {
        Tang[i] = a[i];
        Giam[i] = a[i];
    }
    for (int i = 1; i < n; ++i)
        for (int j = 0; j < i; ++j)
        {
            if (a[i] > a[j] and Tang[i] < Tang[j] + a[i])
                Tang[i] = Tang[j] + a[i];
        }
    for(int i=n-2;i>=0;--i)
    {
        for(int j=n-1;j>i;--j)
        {
            if(a[i]>a[j] and Giam[i]<Giam[j]+a[i])
                Giam[i]=Giam[j]+a[i];
        }
    }
    int ans=INT_MIN;    
    for(int i=0;i<n;++i)
    {
        ans=max(ans,Tang[i]+Giam[i]-a[i]);
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        cout<<res(a, n)<<endl;
    }

    return 0;
}

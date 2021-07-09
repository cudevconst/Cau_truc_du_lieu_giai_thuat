#include <bits/stdc++.h>

using namespace std;
int res(int a[],int n)
{
    int tang[n];
    int giam[n];
    tang[0]=1;
    giam[n-1]=1;
    for(int i=1;i<n;++i)
    {
        if(a[i]>a[i-1])
        {
            tang[i]=tang[i-1]+1;
        }
        else tang[i]=1;
    }
    for(int i=n-2;i>=0;--i)
    {
        if(a[i]>a[i+1])
        {
            giam[i]=giam[i+1]+1;
        }
        else giam[i]=1;
    }
    int Max=INT_MIN;
    for(int i=0;i<n;++i)
    {
        if(tang[i]+giam[i]-1>Max)
        Max=tang[i]+giam[i]-1;
    }
    return Max;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
        }
        cout<<res(a,n)<<endl;
        
        
    }
    return 0;
}
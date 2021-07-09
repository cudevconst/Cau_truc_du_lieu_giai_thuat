#include <bits/stdc++.h>
#define ll long long
using namespace std;
int min3(int x,int y,int z)
{
    if (x < y)
      return (x < z)? x : z;
   else
      return (y < z)? y : z;
}

    
    

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,m;
    cin>>n>>m;
    int a[500][500];
    int dp[501][501];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=m;++j)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=m;++j)
        {
            
            
            if(a[i][j])
                dp[i][j]=min3(dp[i][j-1],dp[i-1][j],dp[i-1][j-1])+1;
        }
    }
    int Max=0;
    for(int i=0;i<=n;++i)
    {
        for(int j=0;j<=m;++j)
        {
            if(dp[i][j]>Max)
            Max=dp[i][j];
        }
    }
    cout<<Max<<endl;
    }
    return 0;
}
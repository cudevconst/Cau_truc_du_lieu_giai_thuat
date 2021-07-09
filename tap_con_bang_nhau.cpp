#include<bits/stdc++.h>
using namespace std;
bool Find(int a[],int n,int k)
{
    int dp[n+1][k+1];
    
    for(int i=0;i<=k;++i)
    {
        dp[0][i]=0;
    }
    for(int i=0;i<=n;++i)
    {
        dp[i][0]=1;
    }
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=k;++j)
        {
            if(a[i-1]>j)
                dp[i][j]=dp[i-1][j];
            else 
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i-1]]);
        }
    }
    return dp[n][k];
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        long sum=0;
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%2==0)
        Find(a,n,sum/2)==1?cout<<"YES\n":cout<<"NO\n";
        else cout<<"NO\n";
    }

  return 0;
}
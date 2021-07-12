#include <bits/stdc++.h>
 
using namespace std;
const long long M=1e9+7;
long long out(int a[],int n,int s)
{
    long long dp[s+1];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(int i=1;i<=s;++i)
    {
        for(int j=0;j<n;++j)
        {
            if(i>=a[j])
            {
                dp[i]+=dp[i-a[j]]%M;
            }
        }
    }
    return dp[s]%M;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,s;
      cin>>n>>s;
      int a[n];
      for(int i=0;i<n;++i)
      {
          cin>>a[i];
      }
      cout<<out(a,n,s)<<endl;
    
    }
  
   
    return 0;
}
#include <bits/stdc++.h>
  
using namespace std;
int res(int n)
{
    int dp[n+1];
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    dp[3]=3;
    for(int i=4;i<=n;++i)
    {
        dp[i]=i;
        for(int j=1;j<=ceil(sqrt(n));++j)
        {
            int tmp=j*j;
            if(j*j>i)
                break;
            else    
                dp[i]=min(dp[i],1+dp[i-tmp]);
        }
    }
    return dp[n];
}
int main()
{   
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            cout<<res(n)<<endl;
        }
        
  
    return 0;
}

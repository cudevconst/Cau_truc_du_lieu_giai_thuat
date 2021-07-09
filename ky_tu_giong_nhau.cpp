#include <bits/stdc++.h>

using namespace std;
int mintime(int n,int them,int d,int c)
{
    if(n==1)
        return them;
    int dp[n+1]={0};
    dp[1]=them;
    for(int i=2;i<=n;++i)
    {
        if(i%2==0)
            dp[i]=min(dp[i-1]+them,dp[i/2]+c);
        else 
            dp[i]=min(dp[i-1]+them,dp[(i+1)/2]+c+d);
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
       int them,de,cop;
       cin>>them>>de>>cop;
       cout<<mintime(n,them,de,cop)<<endl;
   }
    return 0;
}
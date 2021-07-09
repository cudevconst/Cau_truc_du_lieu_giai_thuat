#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3;
int m,n,p;
int max3(int x,int y,int z)
{
    if(x>y)
        return (x>z)?x:z;
    if(x<y)
        return (y>z)?y:z;
}
void out()
{
    int dp[n+1][m+1][p+1];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=m;++j)
        {
            for(int k=1;k<=p;++k)
            {
                if(s1[i-1]==s2[j-1] and s1[i-1]==s3[k-1])
                    dp[i][j][k]=dp[i-1][j-1][k-1]+1;
                else
                    dp[i][j][k]=max(max(dp[i-1][j][k],dp[i][j-1][k]),dp[i][j][k-1]);
            }
        }
    }
    cout<<dp[n][m][p]<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>p;
        cin>>s1>>s2>>s3;
        out();
    }
    return 0;
}
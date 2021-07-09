#include<bits/stdc++.h>

using namespace std;
void reversestr(string &str)
{
    int n=str.size();
    for(int i=0;i<n/2;++i)
    swap(str[i],str[n-i-1]);
}

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        cin>>s1;
        string s2=s1;
        reversestr(s2);
        int n=s1.size();
        int dp[n+1][n+1];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=n;++i)
        {
            for(int j=1;j<=n;++j)
            {
                if(s1[i-1]==s2[j-1])
                dp[i][j]=dp[i-1][j-1]+1;
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        cout<<n-dp[n][n]<<endl;
    }

    
    return 0;
}
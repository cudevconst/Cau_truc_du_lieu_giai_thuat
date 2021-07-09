#include <bits/stdc++.h>
using namespace std;
const long M=1000000007;
int res(int n,int k)
{
    int C[k+1];
    for(int i=0;i<=k;++i)
    {
        C[i]=0;
    }
    C[0]=1;
    for(int i=1;i<=n;++i)
    {
        for(int j=min(i,k);j>0;--j)
        C[j]=C[j]%M+C[j-1]%M;
    }
    return C[k]%M;
}
int main() {
   int t;cin>>t;
   while(t--)
   {
       int n,k;
       cin>>n>>k;
       cout<<res(n,k)<<endl;
   }
   return 0;
}
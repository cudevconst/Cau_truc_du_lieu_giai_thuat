#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod=1e9+7;
ll a[10][10],b[10][10];
int n;
ll k;
void Mul(ll x[10][10],ll y[10][10])
{
    int tmp[10][10];
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            ll res=0;
            for(int k=0;k<n;++k)
            {
                res+=(x[i][k]*y[k][j])%mod;
                res%=mod;
            }
            tmp[i][j]=res;
        }
    }
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            a[i][j]=tmp[i][j];
        }
    }
}
void Pow(ll a[10][10],ll m)
{
    if(m<=1)
        return;
    Pow(a,m/2);
    Mul(a,a);
    if(m&1)
    Mul(a,b);
}
void Slove()
{
    cin>>n>>k;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            cin>>a[i][j];
            b[i][j]=a[i][j];
        }
    }
    Pow(a,k);
    ll res=0;
    for(int i=0;i<n;++i)
    {
        res+=(a[i][i]%mod);
        res%=mod;
    }
    cout<<res<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Slove();
    }
    return 0;
}
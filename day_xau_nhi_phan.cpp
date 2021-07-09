#include <bits/stdc++.h>
  
using namespace std;
 long long a[100];
int divand(int n,long long k)
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    if(k<=a[n-2])
        return divand(n-2,k);
    else return divand(n-1,k-a[n-2]);
}
void fibo()
{
   
    a[1]=1;
    a[2]=1;
    for(int i=3;i<=93;++i)
    {
        a[i]=a[i-1]+a[i-2];
    }
}
int main()
{   
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        long long k;
    cin>>n>>k;
    fibo();
    cout<<divand(n,k)<<endl;
    }
    
  
    return 0;
}
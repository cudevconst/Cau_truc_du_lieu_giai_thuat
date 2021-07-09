#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int n)
{
    int b[n];
    for(int i=0;i<n;++i)
     {
         b[i]=a[i];
     }
     sort(a,a+n);
     int check=1;
     for(int i=0;i<n;++i)
     {
         if(a[i]!=b[i] && a[i]!=b[n-1-i])
         {
             return 0;
         }
     }
     return 1;
}
int main(){
  int t;cin>>t;
  while(t--){
     int n;
     cin>>n;
     int a[n];
     int b[n];
     for(int i=0;i<n;++i)
     {
         cin>>a[i];
        
     }
    
     if(check(a,n))
     cout<<"Yes\n";
     else cout<<"No\n";
     }

  return 0;
}
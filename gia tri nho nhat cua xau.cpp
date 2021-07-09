#include<bits/stdc++.h>

using namespace std;

int main(){
    
   int t;cin>>t;
   while(t--)
   {
       int k;
       cin>>k;
       string str;
       cin>>str;
       long a[26]={0};
       priority_queue<long> q;
       for(int i=0;i<str.size();++i)
       {
          a[str[i]-'A']++;
       }
       for(int i=0;i<26;++i)
       {
           if(a[i]!=0)
           q.push(a[i]);
       }
       while(k--)
       {
           long top=q.top();
           q.pop();
           top-=1;
           q.push(top);
       }
       long long res=0;
       while(q.size()>0)
       {
           long ans=q.top();
           res+=pow(ans,2);
           q.pop();
       }
        cout<<res<<endl;
   }


    
    return 0;
}
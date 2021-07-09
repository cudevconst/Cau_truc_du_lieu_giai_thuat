#include<bits/stdc++.h>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
     int n,s,m;
     cin>>n>>s>>m;
     if(n*6<m*7 or m>n)
     {
       cout<<-1<<endl;
     }
     else {
       int cnt=(m*s)/n;
       if((m*s)%n!=0)
       cnt++;
       cout<<cnt<<endl;
     }
   }

    
   return 0;
}
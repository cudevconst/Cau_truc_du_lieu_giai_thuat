#include<bits/stdc++.h>

using namespace std;
struct job
{
    int start,end;
};
bool cmp(job a,job b)
{
    return a.end<b.end;
}
int main(){
    
   int t;
   cin>>t;
   while(t--)
   {
       job a[1001];
       int n;
       cin>>n;
       for(int i=0;i<n;++i)
       {
           cin>>a[i].start;
       }
       for(int i=0;i<n;++i)
       {
           cin>>a[i].end;
       }
       sort(a,a+n,cmp);
       int cnt=1,ok=0;
       for(int i=1;i<n;++i)
       {
           if(a[i].start>=a[ok].end)
           {
               cnt++;
               ok=i;
           }
       }
       cout<<cnt<<endl;

   }
    
    return 0;
}
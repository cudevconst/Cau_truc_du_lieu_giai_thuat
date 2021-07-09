#include <iostream> 
#include <math.h> 
#include <algorithm>
#include <cstring>
#include <math.h>
using namespace std;  
int ngto(int n)
{
  for(int i=2;i<=sqrt(n);++i)
  {
    if(n%i==0)
    return 0;
  }
  return 1;
}
void print(int n)
{
  for(int i=2;i<=n/2;++i)
   {
     if(ngto(i)==1 and ngto(n-i)==1)
     {
       cout<<i<<" "<<n-i<<"\n";
       return;
     }
   }
   cout<<"-1\n";
}
int main ()
 {
   int t;
   cin>>t;
   while(t--)
   {
     int n;
   cin>>n;
   print(n);
   }
  return 0;
}
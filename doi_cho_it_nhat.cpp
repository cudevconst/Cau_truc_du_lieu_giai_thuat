#include <iostream> 
#include <math.h> 
#include <algorithm>
using namespace std;  

int main ()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      int x; 
      cin>>n;
      int a[1000];
     // cin>>x;
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      int tmp=0,cnt=0;
      for(int i=0;i<n-1;i++)
      {
          tmp=i;
          int ok=0;
          for(int j=i+1;j<n;j++)
          {
            if(a[j]<a[tmp])
            {
              tmp=j;
              ok=1;
            }
          }
          if(ok==1)
          cnt++;
          swap(a[tmp],a[i]);
      }
      
      cout<<cnt<<endl;
  }

  return 0;
}
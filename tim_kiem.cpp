#include <iostream> 
#include <math.h> 
#include <algorithm>
#include <map>
using namespace std;  

int main ()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n,k;
      cin>>n>>k;
      int a[n];
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      if(binary_search(a,a+n,k))cout<<"1\n";
      else cout<<"-1\n";
      
  }

  return 0;
}
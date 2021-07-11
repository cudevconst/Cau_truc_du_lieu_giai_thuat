#include<bits/stdc++.h>
using namespace std;
long long sumOfSubstrings(string num)
{
    long long  sum = 0;
    long long  mf = 1;
    for (long long i=num.size()-1; i>=0; i--)
    {
        sum += (num[i]-'0')*(i+1)*mf;
        mf = mf*10 + 1;
    }
  
    return sum;
}
int main(){
  int t;cin>>t;
  while(t--){
      string str;
      cin>>str;
      cout<<sumOfSubstrings(str)<<endl;
  }

  return 0;
}
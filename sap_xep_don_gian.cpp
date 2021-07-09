#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

	
		int n;
        cin>>n;
        int a[n];
        int val[n]={0};
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
        }
        int res=INT_MIN;
        for(int i=0;i<n;++i)
        {
            val[a[i]]=val[a[i]-1]+1;
            res=max(res,val[a[i]]);
        }
        cout<<n-res<<endl;
	return 0;
}
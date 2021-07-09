#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   	int t;
	cin>>t;
	while(t--)
	{
		
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;++i)
        {
            if(i%2==0)
                cout<<a[i]<<" ";
            else if(n%2==0)
                cout<<a[n-i-1]<<" ";
            else cout<<a[n-i]<<" ";
        }
        
	}
    return 0;
}
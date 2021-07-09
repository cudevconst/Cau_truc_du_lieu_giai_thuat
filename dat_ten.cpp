#include <bits/stdc++.h>
using namespace std;


int main()
{
   	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
        cin >> n >> m;
        int a[n];
        fill(a,a+n,0);
        for(int i=0;i<m;++i)
        {
            a[i]=1;
        }
        do
        {
            for(int i=0;i<n;++i)
            {
                if(a[i])
                    cout<<(char)(i+65);
            }
            cout<<endl;
        } while (prev_permutation(a,a+n));
        
	}
    return 0;
}
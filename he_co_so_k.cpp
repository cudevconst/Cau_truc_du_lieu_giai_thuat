#include <bits/stdc++.h>
 
using namespace std;
string str;
void out (string a,string b,int k)
{
    while(a.size()<b.size())
	{
		a="0"+a;
	}
	while(b.size()<a.size())
	{
		b="0"+b;
	}
    int mod=0;
    for(int i=a.size()-1;i>=0;--i)
    {
        int ok=(int)(a[i]-'0')+(int)(b[i]-'0')+mod;
        if(ok>=k)
        {
            str+=(char)(ok-k+'0');
            mod=1;
        }
        else 
        {
            str+=(char)(ok+'0');
            mod=0;
        }
    }
    if(mod)
    {
        str+=(char)(mod+'0');
    }
    reverse(str.begin(),str.end());
    cout<<str<<endl;
	
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        str.clear();
        int k;
        string a,b;
        cin>>k>>a>>b;
        out(a,b,k);
    }
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
string prevstring(string str)
{
    int n=str.size();
    for(int i=n-1;i>=0;--i)
    {
        if(str.at(i)=='1')
        {
            str.at(i)='0';
            break;
        }
        else str.at(i)='1';
    }
    return str;
}
int main()
{
   	int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        cout<<prevstring(str)<<endl;
    }
    
    return 0;
}
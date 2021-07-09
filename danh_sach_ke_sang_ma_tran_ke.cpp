#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;
    cin.ignore();
    int a[n][n]={};
    int ok=0;
    
    int so=0;
    while(ok<n)
    {
        vector<int> v;
        string str;
        getline(cin,str);
        str+=" ";
        for(int i=0;i<str.size();++i)
        {
            if(str.at(i)>='0' and str.at(i)<='9')
                {
                    so=10*so+(int)(str.at(i)-'0');
                }
            else 
            {
                
                if(so!=0)
                v.push_back(so);
                so=0;
                
            }
        }
        
        for(int i=0;i<v.size();++i)
        {
            a[ok][v[i]-1]=1;
        }
        ok++;
    }

    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
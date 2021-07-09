#include <bits/stdc++.h>
  
using namespace std;
vector<vector<int>> so;
vector<int> v;
vector<vector<char>> chu;
vector<char> u;

int check(vector<char> &a)
{
    for(int i=1;i<a.size();++i)
    {
        for(int j=0;j<i;++j)
        if(a.at(i)==a.at(j) and a.at(i)>='A' and a.at(i)<='Z')
            return 0;
    }
    return 1;
}
void TryChu(int i,int n)
{
    if(i==2*n)
    {
        if(check(u))
            chu.push_back(u);
        
        return;
    }
    if(i<n)
    {
        for(int j=0;j<n;++j)
    {
        u.push_back((char)(j+65));
        TryChu(i+1,n);
        u.pop_back();
    }
    }
    else{
        for(int j=0;j<n;++j)
        {
            u.push_back((char)(j+49));
                TryChu(i+1,n);
            u.pop_back();        }
    }
}
int main()
{   
        int n;
        cin>>n;
        TryChu(0,n);
        for(int i=0;i<chu.size();++i)
        {
            for(int j=0;j<chu[i].size();++j)
            {
                cout<<chu[i][j];
            }
            cout<<endl;
        }
        
  
    return 0;
}
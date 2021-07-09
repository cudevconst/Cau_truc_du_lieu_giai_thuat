#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        stack<char> sc;
        stack<int> s;
        vector<int>v;
        int ok=1;
        for(int i=str.size()-1;i>=0;--i)
        {
            if(str.at(i)=='(' or str.at(i)==')')
                sc.push(str.at(i));
        }
        while(!sc.empty())
        {
            if(sc.top()=='(')
            {
                v.push_back(ok);
                s.push(ok);
                sc.pop();
                ok++;
            }
            else{
                v.push_back(s.top());
                s.pop();
                sc.pop();
            }
        }
        for(int i=0;i<v.size();++i)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
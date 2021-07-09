#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
     cin.ignore();
    while(t--)
    {
       
        stack<string> s;
        string str;
        getline(cin,str);
        stringstream ss(str);
        string token;
        while(ss>>token)
        {
            s.push(token);
        }
        
        while(!s.empty())
        {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
    }
    return 0;
}
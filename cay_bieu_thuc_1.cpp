#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
         stack<string> s;

        for (int i = 0; str[i] != '\0'; i++)
        {

            if (str[i] >= 'a' and str[i] <= 'z')
            {
                string tmp(1, str[i]);
                s.push(tmp);
            }
            else
            {
                string tmp1 = s.top();
                s.pop();
                string tmp2 = s.top();
                s.pop();
                s.push(tmp2 + str[i] +  tmp1);
            }
        }
        cout <<s.top()<< endl;
    }
    return 0;
}
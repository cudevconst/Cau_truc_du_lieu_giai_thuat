#include <bits/stdc++.h>

using namespace std;
void daochuoi(string &str)
{
    int n = str.size();
    for (int i = 0; i < n / 2; ++i)
        swap(str[i], str[n - i - 1]);
}
int res(string str, string str1, int n)
{
    int dp[n + 1][n + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (str.at(i - 1) == str1.at(j - 1))
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[n][n];
}
int main()
{

    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string str;
        cin >> str;
        string str2 = str;
        daochuoi(str2);
        int n = str.size();

        cout << n - res(str, str2, n) << endl;
    }
    return 0;
}
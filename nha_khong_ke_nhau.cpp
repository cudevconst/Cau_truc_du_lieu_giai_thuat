#include <bits/stdc++.h>
#define ll long long;
using namespace std;
int res(int arr[], int n)
{
    int check = arr[0];
    int ok = 0;
    int ok1;

    for (int i = 1; i < n; i++)
    {
        if (check > ok)
            ok1 = check;
        else
            ok1 = ok;

        check = ok + arr[i];
        ok = ok1;
    }
    if (check > ok)
        return check;
    return ok;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        cout << res(a, n) << endl;
    }

    return 0;
}
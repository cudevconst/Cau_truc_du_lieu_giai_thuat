#include <bits/stdc++.h>
using namespace std;
int convert(int m, int n)
{
  if (m == n)
    return 0;
  if (m > n)
    return m - n;
  if (n % 2 == 1)
    return 1 + convert(m, n + 1);
  else
    return 1 + convert(m, n / 2);
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
    cout << convert(n, m) << endl;
  }

  return 0;
}
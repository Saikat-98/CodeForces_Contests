#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<long long>
#define eb(x) emplace_back(x)
#define setbits(x) __builtin_popcountll(x)
#define tz(x) __builtin_ctzll(x)
#define lz(x) __builtin_clzll(x)
#define fsetbit(x) ffsll(x)
#define mod 1000000007
#define inf 1e18
#define w(x) \
  int x;     \
  cin >> x;  \
  while (x--)
#define debug(x, val) cout << "The value of " << x << " is: " << val << "\n";
#define op(x) cout << x << "\n";
void fastIO()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}

int maxPower(int n, int k)
{
  int op = 1, temp = k;
  while (n % k == 0)
    k = pow(temp, ++op);
  return op - 1;
}

void solve()
{
  w(t)
  {
    int n, x;
    cin >> n >> x;
    vi v(n);

    int sum = 0;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
      int val;
      cin >> val;
      v[i] = val;
    }
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
      if (v[i] % x == 0)
        sum += v[i];
      else
        flag = false;

      if (flag)
      {
        int power = maxPower(v[i], x);
        mini = std::min(mini, power);
        sum += mini * v[i];
      }
    }
    cout << sum << "\n";
  }
}

int32_t main()
{
  fastIO();
  solve();

  return 0;
}
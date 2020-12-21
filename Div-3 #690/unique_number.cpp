#include <bits/stdc++.h>
using namespace std;

#define ll long long
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

int main()
{
  fastIO();
  w(t)
  {
    ll n;
    cin >> n;
    ll ans;
    bool flag = false;
    for (ll i = 1;; i++)
    {
      ll j = i;
      ll sum = 0;
      unordered_set<int> s;
      // cout << i << endl;
      s.insert(j % 10);
      while (j > 0)
      {
        int rem = j % 10;
        if (s.find(rem) != s.end())
          s.insert(rem);
        else
        {
          flag = true;
          break;
        }
        sum += rem;
        // cout << rem << " " << sum << " ";
        j = j / 10;
      }
      // cout << "Size = " << s.size() << endl;
      if (flag)
        break;
      if (sum == n)
      {
        ans = i;
        break;
      }
    }
    if (flag)
      cout << "-1" << endl;
    else
      cout << ans << endl;
  }
  return 0;
}
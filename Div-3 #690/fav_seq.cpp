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
  ll t;
  cin >> t;
  while (t > 0)
  {
    int len, slow = 0, fast = 1, count = 0;
    cin >> len;
    int arr[len];
    int input[len];
    for (int i = 0; i < len; i++)
    {
      int val;
      cin >> val;
      input[i] = val;
    }
    for (int i = 0; i <= len / 2; i++)
    {
      arr[slow] = input[i];
      arr[fast] = input[len - i - 1];
      slow += 2;
      fast += 2;
    }
    for (int i = 0; i < len; i++)
      cout << arr[i] << " ";
    cout << "\n";
    t--;
  }
  return 0;
}
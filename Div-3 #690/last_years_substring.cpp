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
    int len;
    cin >> len;
    string str;
    cin >> str;
    bool flag = false;
    for (int i = 0; i < len; i++)
    {
      if (str[i] == '2')
      {
        for (int j = i + 1; j < len; j++)
        {
          if (str[j] == '0')
          {
            for (int k = j + 1; k < len; k++)
            {
              if (str[k] == '2')
              {
                for (int l = k + 1; l < len; l++)
                {
                  if (str[l] == '0')
                  {
                    cout << "YES" << endl;
                    flag = true;
                    break;
                  }
                }
                if (flag)
                  break;
              }
            }
            if (flag)
              break;
          }
        }
        if (flag)
          break;
      }
    }
    if (!flag)
      cout << "NO" << endl;
  }
  return 0;
}
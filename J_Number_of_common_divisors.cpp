#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e7;

int solve(int &gcd)
{
      int cnt = 0;
      for (int i = 1; i * i <= gcd; i++)
      {
            if (gcd % i == 0)
            {
                  if (i != (gcd / i))
                        cnt += 2;
                  else
                        cnt++;
            }
      }
      return cnt;
}

int main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(0), cout.tie(0);

      int t, a, b;

      cin >> t;
      while (t--)
      {

            cin >> a >> b;
            int g = gcd(a, b);

            cout << solve(g) << endl;
      }
      // cout << solve(a,b)<<endl;
}
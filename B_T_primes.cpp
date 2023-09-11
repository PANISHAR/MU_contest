#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MX = 1e5 + 7;
vector<int> v(MX);
int32_t main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      for (int i = 2; i <= MX; i++)
      {
            if (v[i] == 0)
            {
                  for (int j = 2; i * j < MX; j++)
                  {
                        v[i * j] = 1;
                  }
            }
      }

      int a;
      cin >> a;
      while (a--)
      {
            int b;
            cin >> b;
            int n = sqrt(b);
            int cnt = 0;

            if (b == 1)
                  cout << "NO" << endl;
            else if (n * n == b && v[n] == 0)
            {
                  cout << "YES" << endl;
            }
            else
            {
                  cout << "NO" << endl;
            }
      }
      return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    set<ll> s;
    ll n, k;
    cin >> n >> k;

    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            s.insert(i);
            s.insert(n / i);
        }
    }

    if (s.size() < k) {
        cout << -1 << endl;
    } else {
        int cnt = 0;

        for (auto u : s) {
            cnt++;
            if (cnt == k) {
                cout << u << endl;
                break;
            }
        }
    }

    return 0;
}

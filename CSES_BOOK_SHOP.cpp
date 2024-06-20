#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

#include <iostream>
#include <bits/stdc++.h>
#include <set>

using namespace std;

using ll = long long;
#define int ll

#define endl '\n'
#define fora(i, a, b) for (int i = int(a); i < int(b); i++)
#define foro(i, b) fora(i, 0, b)
#define forta(i, a, b) for (int i = int(b) - 1; i >= int(a); i--)
#define forto(i, b) forta(i, 0, b)
#define pb push_back
#define ff first
#define sda second
#define all(x) x.begin(), x.end()

using pi = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;

#define mp make_pair
#define mt make_tuple

void init_code()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void solve()
{
    int n, x;
    cin >> n >> x;
    vi h(n), s(n);
    vector<pi> v;
    foro(i, n)
    {
        cin >> h[i];
    }
    foro(i, n)
    {
        cin >> s[i];
        v.pb({h[i], s[i]});
    }
    sort(all(v));
    vi dp(x + 1, 0);
    foro(i, n)
    {
        if (v[i].first > x)
        {
            break;
        }
        forta(j, 1, x + 1)
        {
            if (v[i].first > j)
            {
                break;
            }
            dp[j] = max(dp[j], v[i].second + dp[j - v[i].first]);
        }
    }
    cout << dp[x];
}

signed main()
{

    init_code();

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
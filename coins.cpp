#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

#include <iostream>
#include <bits/stdc++.h>

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

double dp[3005][3005];

double crow(vector<long double> &p, int k, int h)
{
    if (k == 0)
    {
        return 0;
    }
    if (h == 0)
    {
        return 1;
    }

    if (dp[k][h] > -0.9)
    {
        return dp[k][h];
    }
    return dp[k][h] = p[k] * crow(p, --k, --h) + (1 - p[++k]) * crow(p, --k, h);
}

void solve()
{
    int n;
    cin >> n;
    vector<long double> p(n);
    foro(i, n)
    {
        cin >> p[i];
    }
    cout << crow(p, n, (n + 1) / 2);
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
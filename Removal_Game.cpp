// 2 ACCEPTED

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

// vi dp

// int sum = 0;

int D(vi &a, int l, int r)
{
    if (r == l)
    {
        // sum += a[l];
        return a[r];
    }
    if (r - l == 1)
    {
        int o = max(a[l], a[r]);
        // sum += o;
        return o;
    }
    int o = max(D(a, l + 2, r) + a[l], max(D(a, l, r - 2) + a[r], max(D(a, l + 1, r - 1) + a[l], D(a, l + 1, r - 1) + a[r])));

    return o;
}

void init_code()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    foro(i, n)
    {
        cin >> a[i];
    }
    int p = D(a, 0, n - 1);
    cout << p;
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

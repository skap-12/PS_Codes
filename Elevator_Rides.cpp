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

void solve()
{
    int n, x;
    cin >> n >> x;
    vi a(n);
    foro(i, n)
    {
        cin >> a[i];
    }
    int l = 0, r = n - 1;
    int sum = 0;
    sort(all(a));
    int ctr = 0;
    sum = a[r] + a[l];
    while (r > l)
    {
        if (sum == x)
        {
            l++;
            r--;
            sum = a[l] + a[r];
            ctr++;
        }
        if (sum > x)
        {
            sum -= a[r];
            r--;
            ctr++;
            sum += a[r];
        }
        if (sum < x)
        {
            l++;
            sum += a[l];
            if (sum > x)
            {
                r--;
                ctr++;
                sum = a[l] + a[r];
            }
        }
    }
    // if (r == l)
    // {
    //     ctr++;
    // }
    ctr++;
    int ctr1 = ctr;
    r = 0, l = 0;
    sum = 0;
    sort(all(a));
    ctr = 0;
    vi chk(n, 0);
    for (l = 0; l < n;)
    {
        sum = 0;
        while (r < n && sum <= x)
        {
            sum += a[r];
            chk[r] = 1;
            r++;
        }
        r--;
        ctr++;
        if (chk[n - 1])
        {
            break;
        }

        // ctr++;
        sum -= a[l];
        l = r + 1;
    }
    cout << min(ctr1, ctr);
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
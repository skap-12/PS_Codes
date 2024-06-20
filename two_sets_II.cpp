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
#define MOD 1000000007

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
    int n;
    cin >> n;
    int sum = n * (n + 1) / 2;
    if (sum % 2)
    {
        cout << 0;
        return;
    }
    sum /= 2;
    vvi dp(n + 1, vi(sum + 1, 0));
    dp[0][0] = 1;
    foro(j, sum + 1)
    {
        foro(i, n)
        {
            dp[i][j] = dp[i - 1][j];
            if (j >= i)
            {
                dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - i]) % 1000000007;
            }
        }
    }
    cout << dp[n - 1][sum] << endl;
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
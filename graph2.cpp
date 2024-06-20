// DEBUGGING...

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
    int n, m;
    cin >> n >> m;
    vector<int> adj[n + 1];
    vi v1(m), v2(m);
    int i = 0;
    vi chk(n + 1, 1);
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
        v1[i] = a;
        v2[i] = b;
        i++;
        chk[a] = 0;
        chk[b] = 0;
    }
    fora(i, 1, n + 1)
    {
        if (!chk[i])
        {
            for (auto u : adj[i])
            {
                if (u != i)
                {
                    int ctr = 1;
                    for (auto p : adj[u])
                    {
                        if (u == p)
                        {
                            ctr = 0;
                            break;
                        }
                    }
                    if (ctr)
                    {
                        cout << "NO";
                        return;
                    }
                }
            }
            chk[i] = 1;
        }
    }
    cout << "Yes";
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

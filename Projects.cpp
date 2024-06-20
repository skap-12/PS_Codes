

#pragma GCC optimize ("Ofast")
    #pragma GCC optimize ("unroll-loops")
     
    #include <iostream>
    #include <bits/stdc++.h>
    
    using namespace std;
     
    using ll=long long;
    #define int ll
     
    #define endl '\n'
    #define fora(i,a,b) for(int i=int(a);i<int(b);i++)
    #define foro(i,b) fora(i,0,b)
    #define forta(i,a,b) for(int i=int(b)-1;i>=int(a);i--)
    #define forto(i,b) forta(i,0,b)
    #define pb push_back
    #define ff first
    #define sda second
    #define all(x) x.begin(),x.end()
     
    using pi=pair<int,int>;
    using vi=vector<int>;
    using vvi=vector<vi>;
     
    #define mp make_pair
    #define mt make_tuple
     
    void init_code(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
     
    void solve(){
        int n;
        cin >> n;
        vi a(n),b(n),p(n);
        foro(i,n)
        {
            cin >> a[i] >> b[i] >> p[i];
        }
        vi dp(n+1, 0);
        foro(i,n)
        {
            dp[b[i]] = dp[b[i]-1];
            foro(j,n)
            {
                dp[b[i]] = max(dp[b[i]], dp[a[j]] + p[j]);
            }
        }
        cout << dp[n-1] << endl;

        
    }
     
    signed main(){
        
        init_code();
        
        int t = 1;
        //cin >> t;
        while(t--){
            solve();
        }
    }

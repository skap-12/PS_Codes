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
        int r,c;
        cin >> r >> c;
        char a[r][c];
        foro(i,r)
        {
            foro(j,c)
            {
                cin >> a[i][j];
            }
        }
        foro(i,r)
        {
            foro(j,c-1)
            {
                if(a[i][j] == 'S' && a[i][j+1] == 'W')
                {
                    cout << "No";
                    return;
                }
            }
        }
        foro(i,c)
        {
            foro(j,r-1)
            {
                if(a[j][i] == 'S' && a[j+1][i] == 'W')
                {
                    cout << "No";
                    return;
                }
            }
        }
        cout << "Yes";
        cout << endl;
        foro(i,r)
        {
            foro(j,c)
            {
                if(a[i][j] == '.')
                {
                    cout << "D";
                }
                else{
                    cout << a[i][j];
                }
            }
            cout << endl;
        }


        
    }
     
    signed main(){
        
        init_code();
        
        int t = 1;
        //cin >> t;
        while(t--){
            solve();
        }
    }
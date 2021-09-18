/*
    Contest Name : Codeforces Round #715 (Div. 2)
    Problem Title : C - The Sports Festival
    Problem Url : https://codeforces.com/contest/1509/problem/C
    Verdict : Wrong answer on pretest 5
    Time : 30 ms
    Memory : 0 KB
*/

#include<bits/stdc++.h>

using namespace std;

#define lli long long
#define TC int TC;cin>>TC;while(TC--)
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0)
#define uMin(a, b) a = min(a, b)
#define uMax(a, b) a = max(a, b)
#define mset(a, arr) memset(arr, a, sizeof(arr))
#define piii pair<lli, pair<lli, lli>>
#define piiii pair<pair<lli, lli>, pair<lli, lli>>
#define ff first
#define ss second

#define rep(i, a, b) for(int i = (a) ; i < (b) ; i++)
#define rep1(i, a, b) for(int i = (a) ; i <= (b) ; i++)
#define rep2(i, a, b) for(int i = (a) ; i >= (b) ; i--)

#define cout1(a) cout << a << '\n'
#define cout2(a, b) cout << a << ' ' << b << '\n'
#define cout3(a, b, c) cout << a << ' ' << b << ' ' << c << '\n'
#define cout4(a, b, c, d) cout << a << ' ' << b << ' ' << c << ' ' << d << '\n'

int main(){
    fastIO();

    int n;
    cin >> n;

    int d[n];
    rep(i, 0, n) cin >> d[i];

    vector<lli> v[2001];

    sort(d, d + n);

    rep(i, 0, n){
        int c = 1;
        while(i + c < n && d[i] == d[i+c]) c++;
        i += c - 1;
        v[c].push_back(d[i]);
    }

    rep(i, 0, 2000){
        sort(v[i].begin(), v[i].end());
    }

    lli a1 = 0, a2 = 0;
    lli a = 0;
    lli mx = 0, mn = 1e9+1;
    lli mx1 = 0, mn1 = 1e9+1;
    lli mx2 = 0, mn2 = 1e9+1;
    rep2(i, 2000, 1){
        a1 = 0;
        a2 = 0;
        if(mx == 0 && mn == 1e9+1){
            rep(j, 0, v[i].size()){
                mx1 = uMax(mx1, v[i][j]);
                mn1 = uMin(mn1, v[i][j]);

                mx2 = uMax(mx2, v[i][v[i].size() - 1 - j]);
                mn2 = uMin(mn2, v[i][v[i].size() - 1 - j]);

                a1 += mx1 - mn1;
                a2 += mx2 - mn2;
            }

            mx = mx1;
            mn = mn1;
        }else{
            vector<int> q;
            rep(j, 0, v[i].size()){
                if(v[i][j] < mn || v[i][j] > mx){
                    q.push_back(v[i][j]);
                }
            }

            bool vis[q.size()];
            mset(0, vis);
            rep(j, 0, q.size()){
                int tm = 1e9+1;
                int ti = -1;
                rep(k, 0, q.size()){
                    if(vis[k]) continue;
                    if(q[k] < mn){
                        if(tm > mn - q[k]) ti = k, tm = mn - q[k];
                    }else{
                        if(tm > q[k] - mx) ti = k, tm = q[k] - mx;
                    }
                }
                if(q[ti] < mn) mn = q[ti];
                else mx = q[ti];
                vis[ti] = true;

                a += (mx - mn) * i;
            }
        }

        a += min(a1, a2);
    }

    cout << a;
}
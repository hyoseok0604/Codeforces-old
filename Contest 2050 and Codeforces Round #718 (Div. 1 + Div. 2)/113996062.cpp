/*
    Contest Name : Contest 2050 and Codeforces Round #718 (Div. 1 + Div. 2)
    Problem Title : B - Morning Jogging
    Problem Url : https://codeforces.com/contest/1517/problem/B
    Verdict : Accepted
    Time : 46 ms
    Memory : 600 KB
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

    TC{
        int n, m;
        cin >> n >> m;

        vector<int> b[n];
        vector<pair<int, pair<int, int>>> v;
        rep(i, 0, n){
            rep(j, 0, m){
                int k;
                cin >> k;
                b[i].push_back(k);
                v.push_back({b[i][j], {i, j}});
            }
        }

        sort(v.begin(), v.end());
        rep(i, 0, n) sort(b[i].begin(), b[i].end());

        int ans[n][m];
        int cur[n];
        rep(i, 0, n) cur[i] = m - 1;
        rep(i, 0, m){
            int val = v[i].first;
            int x = v[i].second.first;
            int y = v[i].second.second;
            ans[x][i] = val;
            rep(j, 0, n){
                if(j == x) continue;
                ans[j][i] = b[j][cur[j]--];
            }
        }
        rep(i, 0, n){
            rep(j, 0, m){
                cout << ans[i][j] << ' ';
            }
            cout << '\n';
        }
    }
}

/*
    Contest Name : Codeforces Round #673 (Div. 2)
    Problem Title : C - k-Amazing Numbers
    Problem Url : https://codeforces.com/contest/1417/problem/C
    Verdict : Accepted
    Time : 468 ms
    Memory : 9700 KB
*/

#include<bits/stdc++.h>

using namespace std;

#define lli long long
#define TC int TC;cin>>TC;while(TC--)
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0)
#define uMin(a, b) a = min(a, b)
#define uMax(a, b) a = max(a, b)
#define mset(a, arr) memset(arr, a, sizeof(arr))

#define rep(i, a, b) for(int i = (a) ; i < (b) ; i++)
#define rep1(i, a, b) for(int i = (a) ; i <= (b) ; i++)
#define rep2(i, a, b) for(int i = (a) ; i >= (b) ; i--)

#define cout1(a) cout << a << '\n'
#define cout2(a, b) cout << a << ' ' << b << '\n'
#define cout3(a, b, c) cout << a << ' ' << b << ' ' << c << '\n'
#define cout4(a, b, c, d) cout << a << ' ' << b << ' ' << c << ' ' << d << '\n'

int main(){
    //fastIO();

    TC{
        int n;
        cin >> n;

        int a[n];
        rep(i, 0, n) cin >> a[i];

        int dist[n+1];
        int pos[n+1];
        mset(-1, pos);
        mset(0, dist);

        rep(i, 0, n){
            dist[a[i]] = max(dist[a[i]], i - pos[a[i]]);
            pos[a[i]] = i;
        }

        rep(i, 0, n){
            dist[a[i]] = max(dist[a[i]], n - pos[a[i]]);
        }
        
        vector<pair<int, int>> v;
        rep1(i, 1, n){
            if(dist[i] != 0) v.push_back({dist[i], i});
        }

        sort(v.begin(), v.end());

        int idx = 0;
        int ans = 1e9;
        rep1(i, 1, n){
            while(idx < v.size() && v[idx].first <= i){
                ans = min(ans, v[idx].second);
                idx++;
            }

            if(ans == 1e9) cout << "-1 ";
            else cout << ans << ' ';
        }
        cout << '\n';
    }
}
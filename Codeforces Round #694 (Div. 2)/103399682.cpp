/*
    Contest Name : Codeforces Round #694 (Div. 2)
    Problem Title : B - Strange List
    Problem Url : https://codeforces.com/contest/1471/problem/B
    Verdict : Accepted
    Time : 140 ms
    Memory : 75200 KB
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
        int n, x;
        cin >> n >> x;

        vector<pair<lli, lli>> v(n);
        lli ans = 0;
        rep(i, 0, n){
            lli k;
            cin >> k;
            v[i] = {k, 1};
            ans += v[i].first;
        }

        int cur = 0;
        while(v[cur].first % x == 0){
            v.push_back({v[cur].first / x, v[cur].second * x});
            ans += v[cur].first / x * v[cur].second * x;
            cur++;
        }

        cout << ans << '\n';
    }
}
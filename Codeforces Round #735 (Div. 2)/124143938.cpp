/*
    Contest Name : Codeforces Round #735 (Div. 2)
    Problem Title : B - Cobb
    Problem Url : https://codeforces.com/contest/1554/problem/B
    Verdict : Wrong answer on pretest 3
    Time : 93 ms
    Memory : 7500 KB
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
        int n, k;
        cin >> n >> k;

        lli a[n];
        rep(i, 0, n) cin >> a[i];

        vector<pair<lli, lli>> gap;
        rep(i, 0, n){
            gap.push_back({i + 1 - a[i], i + 1});
        }

        sort(gap.begin(), gap.end());

        pair<lli, lli> ap = gap[gap.size() - 1];

        lli ans = -1e15;

        rep(i, 0, n){
            if(i == ap.second - 1) continue;
            ans = max(ans, ap.second * (i + 1) - k * (a[ap.second - 1] | a[i]));
        }
        
        cout << ans << '\n';
    }
}
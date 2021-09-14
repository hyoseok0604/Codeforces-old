/*
    Contest Name : Codeforces Round #703 (Div. 2)
    Problem Title : D - Max Median
    Problem Url : https://codeforces.com/contest/1486/problem/D
    Verdict : Wrong answer on pretest 2
    Time : 0 ms
    Memory : 7800 KB
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

lli seg[800000], a[200000], n, k, res;
lli update(lli pos, lli val, lli node, lli x, lli y) {
    if (y < pos || pos < x)
        return seg[node];
    if (x == y) return seg[node] += val;
    lli mid = (x + y) >> 1;
    return seg[node] = update(pos, val, node * 2, x, mid) + update(pos, val, node * 2 + 1, mid + 1, y);
}
lli query(lli val, lli node, lli x, lli y) {
    lli mid = (x + y) >> 1;
    if (x == y)return x;
    if (seg[node * 2] >= val) return query(val, node * 2, x, mid);
    return query(val - seg[node * 2], node * 2 + 1, mid + 1, y);
}

int main(){
    fastIO();

    cin >> n >> k;

    rep(i, 0, n) cin >> a[i];

    lli ans = 0;

    rep(i, 0, k-1)
        update(a[i], 1, 1, 0, 200000);
    rep(i, k-1, n) {
        update(a[i], 1, 1, 0, 200000);
        ans = max(ans, query((k + 1) / 2, 1, 0, 200000));
        update(a[i - k + 1], -1, 1, 0, 200000);
    }
    rep(i, n - k + 1, n){
        update(a[i - k + 1], -1, 1, 0, 200000);
    }

    if(k == 2){
        k++;
        rep(i, 0, k-1)
            update(a[i], 1, 1, 0, 200000);
        rep(i, k-1, n) {
            update(a[i], 1, 1, 0, 200000);
            ans = max(ans, query((k + 1) / 2, 1, 0, 200000));
            update(a[i - k + 1], -1, 1, 0, 200000);
        }
    }

    cout << ans;
}
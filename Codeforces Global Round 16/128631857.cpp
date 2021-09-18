/*
    Contest Name : Codeforces Global Round 16
    Problem Title : D1 - Seating Arrangements (easy version)
    Problem Url : https://codeforces.com/contest/1566/problem/D1
    Verdict : Accepted
    Time : 46 ms
    Memory : 6900 KB
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

#define unq(v) v.erase(unique(v.begin(), v.end()), v.end())
#define srt(v) sort(v.begin(), v.end())

lli powerMod(int x, lli y, lli m)
{
    if (y == 0)
        return 1;
    lli p = powerMod(x, y / 2, m) % m;
    p = (p * p) % m;
 
    return (y % 2 == 0) ? p : (x * p) % m;
}

lli tree[400000], size;

void update(lli idx, lli val){
    idx = size + idx;
    tree[idx] = val;

    while(idx > 1){
        idx /= 2;
        tree[idx] = tree[idx*2] + tree[idx*2+1];
    }
}

lli solve(lli L, lli R, lli vtx, lli nL, lli nR){
    if(nL > R || nR < L) return 0;
    if(L <= nL && nR <= R) return tree[vtx];

    int mid = (nL+nR)/2;
    return solve(L,R,vtx*2,nL,mid) + solve(L,R,vtx*2+1,mid+1,nR);
}

int main(){
    fastIO();

    TC{
        int n, m;
        cin >> n >> m;

        vector<pair<int, int>> v;

        int a[n][m];
        rep(i, 0, n) rep(j, 0, m) cin >> a[i][j], v.push_back({a[i][j], -j});

        sort(v.begin(), v.end());

        int ans = 0;
        
        mset(0, tree);

        int lv = 1;
        size = 0;
        while(size + 1 < m){
            size += lv;
            lv *= 2;
        }

        rep(i, 0, m){
            update(-v[i].second + 1, 1);
            if(-v[i].second != 0) ans += solve(1, -v[i].second, 1, 1, size + 1);
        }

        cout << ans << '\n';
    }
}
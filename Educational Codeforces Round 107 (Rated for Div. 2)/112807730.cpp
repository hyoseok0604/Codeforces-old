/*
    Contest Name : Educational Codeforces Round 107 (Rated for Div. 2)
    Problem Title : C - Yet Another Card Deck
    Problem Url : https://codeforces.com/contest/1511/problem/C
    Verdict : Accepted
    Time : 202 ms
    Memory : 4700 KB
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

int d[600000];

int main(){
    fastIO();

    int n, q;
    cin >> n >> q;

    int a[n];
    rep(i, 0, n) cin >> a[i];

    int t[q];
    rep(i, 0, q) cin >> t[i];

    int top[51];
    mset(0, top);

    rep(i, 0, n){
        if(top[a[i]] == 0) top[a[i]] = i + 1;
    }

    rep(i, 0, q){
        int before = top[t[i]];
        cout << before << ' ';
        rep(j, 1, 51){
            if(top[j] < before) top[j]++;
        }
        top[t[i]] = 1;
    }
}
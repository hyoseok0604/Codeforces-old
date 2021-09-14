/*
    Contest Name : Educational Codeforces Round 107 (Rated for Div. 2)
    Problem Title : B - GCD Length
    Problem Url : https://codeforces.com/contest/1511/problem/B
    Verdict : Wrong answer on test 1
    Time : 15 ms
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

    TC{
        int a, b, c;
        cin >> a >> b >> c;

        bool f = false;
        if(a > b) swap(a, b), f = true;

        int x = 7, y = 7, z = 7;
        rep(i, 0, a - 1) x *= 10;

        rep(i, 0, b - 1) y *= 10;

        rep(i, 0, c - 1) z *= 10;

        if(y == z) y = 0;

        if(f) cout3(y + z, x, z);
        else cout3(x, y + z, z);

        // cout << __gcd(x, y + z) << '\n';
    }
}
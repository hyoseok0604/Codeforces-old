/*
    Contest Name : Educational Codeforces Round 110 (Rated for Div. 2)
    Problem Title : A - Fair Playoff
    Problem Url : https://codeforces.com/contest/1535/problem/A
    Verdict : Accepted
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

    TC{
        int a[4];
        rep(i, 0, 4) cin >> a[i];

        int x = max(a[0], a[1]);
        int y = max(a[2], a[3]);

        sort(a, a + 4);
        
        if(x > y) swap(x, y);

        if(x == a[2] && y == a[3]) cout << "YES\n";
        else  cout << "NO\n";
    }
}
/*
    Contest Name : Codeforces Round #696 (Div. 2)
    Problem Title : D - Cleaning
    Problem Url : https://codeforces.com/contest/1474/problem/D
    Verdict : Wrong answer on pretest 2
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
        int n;
        cin >> n;

        int a[n];
        int b[n];
        rep(i, 0, n) cin >> a[i], b[i] = a[i];

        bool ans = false;
        rep(i, 0, n-1){
            int k = min(a[i], a[i+1]);
            a[i] -= k;
            a[i+1] -= k;
        }

        lli s1 = 0;
        rep(i, 0, n){
            s1 += a[i];
        }

        if(s1 == a[0] + a[n-1] && a[0] == a[n-1]) ans = true;

        rep2(i, n-1, 1){
            int k = min(b[i], b[i-1]);
            b[i] -= k;
            b[i-1] -= k;
        }

        lli s2 = 0;
        rep(i, 0, n){
            s2 += b[i];
        }

        if(s2 == b[0] + b[n-1] && b[0] == b[n-1]) ans = true;

        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
}
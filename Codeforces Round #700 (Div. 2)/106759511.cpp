/*
    Contest Name : Codeforces Round #700 (Div. 2)
    Problem Title : B - The Great Hero
    Problem Url : https://codeforces.com/contest/1480/problem/B
    Verdict : Accepted
    Time : 139 ms
    Memory : 1600 KB
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
        lli A, B, n;
        cin >> A >> B >> n;

        lli a[n];
        rep(i, 0, n) cin >> a[i];
        lli b[n];
        rep(i, 0, n) cin >> b[i];

        lli maxa = 0;
        rep(i, 0, n) maxa = max(maxa, a[i]);

        rep(i, 0, n){
            int count = (b[i] + A - 1) / A;
            B -= count * a[i];
        }

        if(B > -maxa) cout << "YES\n";
        else cout << "NO\n";
    }
}
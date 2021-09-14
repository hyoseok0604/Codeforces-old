/*
    Contest Name : Educational Codeforces Round 107 (Rated for Div. 2)
    Problem Title : A - Review Site
    Problem Url : https://codeforces.com/contest/1511/problem/A
    Verdict : Accepted
    Time : 93 ms
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

        int r[n];
        rep(i, 0, n) cin >> r[i];

        int u1 = 0, d1 = 0;
        int u2 = 0, d2 = 0;
        rep(i, 0, n){
            if(r[i] == 1) u1++;
            if(r[i] == 2) d2++;
            if(r[i] == 3){
                if(u1 < d1){
                    d1++;
                }else{
                    u1++;
                }
            }
        }

        cout << u1 + u2 << '\n';
    }
}
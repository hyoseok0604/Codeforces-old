/*
    Contest Name : Educational Codeforces Round 103 (Rated for Div. 2)
    Problem Title : B - Inflation
    Problem Url : https://codeforces.com/contest/1476/problem/B
    Verdict : Wrong answer on test 3
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
        lli n, k;
        cin >> n >> k;
        
        lli p[n];
        rep(i, 0, n) cin >> p[i];

        lli psum = 0;
        lli ans = 0;
        rep(i, 0, n) psum += p[i];
        rep(i, 0, n-1){
            psum -= p[n-1-i];
            if(psum * k < p[n-1-i] * 100){
                int req = (p[n-1-i] * 100 - psum * k + k - 1) / k;
                ans += req;
                psum += req;
            }
        }

        cout << ans << '\n';
    }
}
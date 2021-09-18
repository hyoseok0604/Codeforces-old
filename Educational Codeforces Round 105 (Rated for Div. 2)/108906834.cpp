/*
    Contest Name : Educational Codeforces Round 105 (Rated for Div. 2)
    Problem Title : B - Berland Crossword
    Problem Url : https://codeforces.com/contest/1494/problem/B
    Verdict : Accepted
    Time : 31 ms
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

bool f(int i, int n){
    return i >= 0 && i <= n - 2;
}

int main(){
    fastIO();

    TC{
        int n, u, r, d, l;
        cin >> n >> u >> r >> d >> l;

        bool flag = false;
        rep(i, 0, 2){
            rep(j, 0, 2){
                rep(k, 0, 2){
                    rep(q, 0, 2){
                        int U = u - i - j;
                        int R = r - j - k;
                        int D = d - q - k;
                        int L = l - i - q;
                        if(f(U, n) && f(R, n) && f(D, n) && f(L, n)) flag = true;
                    }
                }
            }
        }

        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
}
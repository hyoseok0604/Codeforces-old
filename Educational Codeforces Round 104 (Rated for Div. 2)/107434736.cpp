/*
    Contest Name : Educational Codeforces Round 104 (Rated for Div. 2)
    Problem Title : C - Minimum Ties
    Problem Url : https://codeforces.com/contest/1487/problem/C
    Verdict : Wrong answer on test 2
    Time : 46 ms
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

int ans[101][101];

void f(int n){
    rep(i, 0, n){
        rep(j, i + 1, n){
            ans[i][j] = ((i + j) % 2) ? 1 : -1;
        }
    }
}

int main(){
    fastIO();
    
    TC{
        int n;
        cin >> n;

        mset(0, ans);
        f((n - 1) / 2 * 2 + 1);

        rep(i, 0, n){
            rep(j, i + 1, n){
                cout << ans[i][j] << ' ';
            }
        }
        cout << '\n';
    }
}
/*
    Contest Name : Contest 2050 and Codeforces Round #718 (Div. 1 + Div. 2)
    Problem Title : C - Fillomino 2
    Problem Url : https://codeforces.com/contest/1517/problem/C
    Verdict : Accepted
    Time : 46 ms
    Memory : 1000 KB
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

    int n;
    cin >> n;

    int p[n];
    rep(i, 0, n) cin >> p[i];

    int ans[n][n];
    mset(0, ans);

    rep(i, 0, n){
        int x = i;
        int y = i;
        rep(j, 0, p[i]){
            ans[x][y] = p[i];
            if(y > 0 && ans[x][y-1] == 0) y--;
            else x++;
        }
    }

    rep(i, 0, n){
        rep(j, 0, i+1){
            cout << ans[i][j] << ' ';
        }
        cout << '\n';
    }
}

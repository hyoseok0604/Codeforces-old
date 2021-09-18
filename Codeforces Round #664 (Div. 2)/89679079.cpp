/*
    Contest Name : Codeforces Round #664 (Div. 2)
    Problem Title : B - Boboniu Plays Chess
    Problem Url : https://codeforces.com/contest/1395/problem/B
    Verdict : Accepted
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

int main(){
    fastIO();

    int n, m, sx, sy, x, y;
    cin >> n >> m >> sx >> sy;

    // x 세로 y 가로

    x = sx, y = sy;

    cout << x << ' ' << y << '\n';
    rep1(i, 1, n){
        x = i;
        if(x != sx) cout << x << ' ' << y << '\n';
    }

    y = 1;

    bool b = false; // false 아래에서 위 true 위에서 아래

    rep1(i, 1, m){
        if(i == sy) continue;
        if(b){
            rep1(j, 1, n){
                cout << j << ' ' << i << '\n';
            }
        }else{
            rep2(j, n, 1){
                cout << j << ' ' << i << '\n';
            }
        }
        b = !b;
    }
}
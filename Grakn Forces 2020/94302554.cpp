/*
    Contest Name : Grakn Forces 2020
    Problem Title : A - Circle Coloring
    Problem Url : https://codeforces.com/contest/1408/problem/A
    Verdict : Wrong answer on pretest 1
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

        int a[3][n];

        rep(j, 0, 3) rep(i, 0, n) cin >> a[j][i];

        
        int ans[n];
        mset(0, ans);
        ans[0] = a[0][0];
        int cur = 0;
        rep(j, 1, n){
            while(ans[j-1] == a[cur][j]){
                cur++;
                cur %= 3;
            }
            ans[j] = a[cur][j];
        }

        rep(j, 0, n){
            cout << ans[j] << ' ';
        }
        cout << '\n';
    }
}
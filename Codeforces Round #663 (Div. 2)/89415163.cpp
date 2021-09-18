/*
    Contest Name : Codeforces Round #663 (Div. 2)
    Problem Title : B - Fix You
    Problem Url : https://codeforces.com/contest/1391/problem/B
    Verdict : Accepted
    Time : 31 ms
    Memory : 7600 KB
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

int dp[1000001];

int main(){
    fastIO();

    TC{
        int n, m;
        cin >> n >> m;
        int ans = 0;
        rep(i, 0, n){
            rep(j, 0, m){
                char c;
                cin >> c;
                if(i == n - 1 && c == 'D') ans++;
                if(j == m - 1 && c == 'R') ans++;
            }
        }

        cout << ans << '\n';
    }
}
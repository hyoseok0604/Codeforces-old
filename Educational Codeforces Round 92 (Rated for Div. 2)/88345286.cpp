/*
    Contest Name : Educational Codeforces Round 92 (Rated for Div. 2)
    Problem Title : C - Good String
    Problem Url : https://codeforces.com/contest/1389/problem/C
    Verdict : Wrong answer on test 2
    Time : 46 ms
    Memory : 3600 KB
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
#define rep(i, a, b) for(int i = a ; i < b ; i++)
#define repR(i, a, b) for(int i = a ; i > b ; i--)

int dp[10][10];

int main(){
    fastIO();

    TC{
        string s;
        cin >> s;

        mset(0, dp);
        
        rep(i, 0, s.length()){
            for(int j = 0 ; j < 10 ; j++){
                if(j == s[i] - '0') continue;
                if(dp[j][s[i] - '0'] % 2 == 1) dp[j][s[i]-'0']++;
                if(dp[s[i] - '0'][j] % 2 == 0) dp[s[i]-'0'][j]++;
            }
            dp[s[i] - '0'][s[i] - '0']++;
        }

        int mx = 0;
        for(int i = 0 ; i < 10 ; i++){
            for(int j = 0 ; j < 10 ; j++){
                if(dp[i][j] % 2 == 0) uMax(mx, dp[i][j]);
            }
        }

        cout << s.length() - mx << '\n';
    }
}
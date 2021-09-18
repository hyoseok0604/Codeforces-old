/*
    Contest Name : Divide by Zero 2021 and Codeforces Round #714 (Div. 2)
    Problem Title : C - Add One
    Problem Url : https://codeforces.com/contest/1513/problem/C
    Verdict : Accepted
    Time : 421 ms
    Memory : 15700 KB
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

lli dp[200050][10];

lli f(int n){
    lli res = 0;
    rep(i, 0, 10){
        res += dp[n][i];
        res %= 1000000007;
    }
    return res;
}

int main(){
    fastIO();
    
    dp[0][0] = 1;

    rep(i, 1, 200050){
        rep(j, 1, 10){
            dp[i][j] = dp[i-1][j-1];
        }
        dp[i][1] += dp[i-1][9];
        dp[i][0] += dp[i-1][9];
        rep(j, 0, 10){
            dp[i][j] %= 1000000007;
        }
    }

    TC{
        int n, m;
        cin >> n >> m;

        int tmp = n;
        lli ans = 0;
        while(tmp != 0){
            ans += f(m + tmp % 10);
            tmp /= 10;
            ans %= 1000000007;
        }
        
        cout << ans << '\n';
    }
}
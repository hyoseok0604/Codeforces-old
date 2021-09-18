/*
    Contest Name : Codeforces Round #663 (Div. 2)
    Problem Title : C - Cyclic Permutations
    Problem Url : https://codeforces.com/contest/1391/problem/C
    Verdict : Accepted
    Time : 31 ms
    Memory : 3700 KB
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

lli powerMod(lli a, lli b, lli mod){
    if(b == 0) return 1;

    if(b % 2 == 0){
        return (powerMod(a, b / 2, mod) * powerMod(a, b / 2, mod)) % mod;
    }else{
        return (powerMod(a, b - 1, mod) * a) % mod;
    }
}

const int mod = 1e9 + 7;

int main(){
    fastIO();

    int n;
    cin >> n;

    lli ans = 1;

    rep1(i, 1, n){
        ans *= i;
        ans %= mod;
    }

    ans -= powerMod(2, n - 1, mod);

    if(ans < 0) ans += mod;

    cout << ans;
}
/*
    Contest Name : Codeforces Round #736 (Div. 2)
    Problem Title : E - The Three Little Pigs
    Problem Url : https://codeforces.com/contest/1549/problem/E
    Verdict : Time limit exceeded on pretest 4
    Time : 1000 ms
    Memory : 27100 KB
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

lli mod = 1000000007;

unsigned long long power(unsigned long long x, int y, int p){
    unsigned long long res = 1;
    x = x % p;

    while(y > 0){
        if(y & 1) res = (res * x) % p;

        y = y >> 1;
        x = (x * x) % p;
    }

    return res;
}

unsigned long long modInverse(unsigned long long n, int p){
    return power(n, p - 2, p);
}

unsigned long long fac[3000005];

unsigned long long nCr(unsigned long long n, int r, int p){
    if(n < r) return 0;

    if(r == 0) return 1;

    return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p;
}

int main(){
    fastIO();
    
    lli n, q;
    cin >> n >> q;

    fac[0] = 1;
    for (int i = 1; i <= n * 3; i++) fac[i] = (fac[i - 1] * i) % mod;

    rep(i, 0, q){
        lli x;
        cin >> x;

        int start = x + 3 - x % 3;
        if(x % 3 == 0) start -= 3;

        lli ans = 0;

        for(int j = start ; j <= n * 3 ; j += 3){
            ans += nCr(j, x, mod);
            ans %= mod;
        }

        cout << ans << '\n';
    }
}
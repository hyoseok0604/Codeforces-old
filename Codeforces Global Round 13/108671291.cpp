/*
    Contest Name : Codeforces Global Round 13
    Problem Title : A - K-th Largest Value
    Problem Url : https://codeforces.com/contest/1491/problem/A
    Verdict : Accepted
    Time : 78 ms
    Memory : 400 KB
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

    
    int n, q;
    cin >> n >> q;

    int a[n];
    rep(i, 0, n) cin >> a[i];

    int one, zero;
    one = zero = 0;
    rep(i, 0, n){
        if(a[i] == 1) one++;
        else zero++;
    }

    rep(i, 0, q){
        int t, x;
        cin >> t >> x;

        if(t == 1){
            if(a[x-1] == 0) a[x-1] = 1, zero--, one++;
            else a[x-1] = 0, zero++, one--;
        }

        if(t == 2){
            if(one >= x) cout << "1\n";
            else cout << "0\n";
        }
    }
}
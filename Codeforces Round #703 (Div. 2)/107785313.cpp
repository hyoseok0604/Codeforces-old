/*
    Contest Name : Codeforces Round #703 (Div. 2)
    Problem Title : A - Shifting Stacks
    Problem Url : https://codeforces.com/contest/1486/problem/A
    Verdict : Accepted
    Time : 31 ms
    Memory : 300 KB
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

        int h[n];
        rep(i, 0, n) cin >> h[i];

        lli p = 0;
        bool f = true;
        rep(i, 0, n){
            if(h[i] == i) continue;
            else if(h[i] > i) p += h[i] - i;
            else p += h[i] - i;
            // cout1(p);
            if(p < 0) f = false;
        }

        if(f) cout << "YES\n";
        else cout << "NO\n";
    }
}
/*
    Contest Name : Codeforces Round #709 (Div. 2, based on Technocup 2021 Final Round)
    Problem Title : B - Restore Modulo
    Problem Url : https://codeforces.com/contest/1484/problem/B
    Verdict : Accepted
    Time : 61 ms
    Memory : 800 KB
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
        
        lli a[n];
        rep(i, 0, n) cin >> a[i];

        bool f = true;
        rep(i, 1, n - 1){
            if(a[i] - a[i-1] != a[i+1] - a[i]) f = false;
        }

        if(f){
            cout << "0\n";
            continue;
        }

        lli gap = -1;

        rep(i, 1, n){
            if(a[i] >= a[i-1] && gap == -1){
                gap = a[i] - a[i-1];
            }
        }

        if(gap == -1){
            cout << "-1\n";
            continue;
        }

        lli k = a[0];
        lli m = -1;
        rep(i, 1, n){
            k += gap;
            if(a[i] != k){
                if(m == -1) m = k - a[i];
                else m = __gcd(m, k - a[i]);
            }
        }

        bool aa = true;
        lli s = a[0];
        lli c = gap;
        rep(i, 0, n){
            if(s % m != a[i]) aa = false;
            s += c;
            s %= m;
        }
        if(aa) cout << m << ' ' << c << '\n';
        else cout << "-1\n";
    }
}
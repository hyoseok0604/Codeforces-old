/*
    Contest Name : Educational Codeforces Round 106 (Rated for Div. 2)
    Problem Title : A - Domino on Windowsill
    Problem Url : https://codeforces.com/contest/1499/problem/A
    Verdict : Accepted
    Time : 30 ms
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
        int n, k1, k2;
        cin >> n >> k1 >> k2;

        int w, b;
        cin >> w >> b;

        // k1, k2;

        int x1 = n - k1;
        int x2 = n - k2;

        int canw = min(k1, k2) + (max(k1, k2) - min(k1, k2)) / 2;
        int canb = min(x1, x2) + (max(x1, x2) - min(x1, x2)) / 2;

        if(w <= canw && b <= canb) cout << "YES\n";
        else cout << "NO\n";
    }
}
/*
    Contest Name : Educational Codeforces Round 110 (Rated for Div. 2)
    Problem Title : B - Array Reodering
    Problem Url : https://codeforces.com/contest/1535/problem/B
    Verdict : Accepted
    Time : 218 ms
    Memory : 200 KB
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

        int a[n];
        rep(i, 0, n) cin >> a[i];

        sort(a, a + n);
        
        vector<int> v;
        rep2(i, n-1, 0) if(a[i] % 2 == 0) v.push_back(a[i]);
        rep2(i, n-1, 0) if(a[i] % 2 == 1) v.push_back(a[i]);

        int ans = 0;
        rep(i, 0, n){
            rep(j, i + 1, n){
                if(__gcd(v[i], v[j] * 2) > 1) ans++;
            }
        }

        cout << ans << '\n';
    }
}
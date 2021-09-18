/*
    Contest Name : Codeforces Round #674 (Div. 3)
    Problem Title : D - Non-zero Segments
    Problem Url : https://codeforces.com/contest/1426/problem/D
    Verdict : Wrong answer on test 7
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

    lli n, k = 0;
    cin >> n;
    lli psum = 0;

    lli ans = 0;

    map<lli, int> mp;

    rep1(i, 1, n){
        int m;
        cin >> m;

        psum += m;

        ans += mp[psum];
        if(mp[psum] != 0){
            ans += mp[0];
            mp.clear();
            psum = m;
        }
        mp[psum]++;
    }

    cout << ans;
}
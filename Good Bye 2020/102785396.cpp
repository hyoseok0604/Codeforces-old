/*
    Contest Name : Good Bye 2020
    Problem Title : B - Last minute enhancements
    Problem Url : https://codeforces.com/contest/1466/problem/B
    Verdict : Wrong answer on test 14
    Time : 904 ms
    Memory : 600 KB
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

        int x[n];
        rep(i, 0, n) cin >> x[i];

        bool check[200001];
        mset(0, check);

        rep(i, 0, n){
            if(!check[x[i]]) check[x[i]] = true;
            else check[x[i]+1] = true;
        }

        int ans = 0;

        rep(i, 0, 200001){
            if(check[i]) ans++;
        }

        cout << ans << '\n';
    }
}
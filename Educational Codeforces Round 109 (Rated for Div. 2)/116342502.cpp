/*
    Contest Name : Educational Codeforces Round 109 (Rated for Div. 2)
    Problem Title : D - Armchairs
    Problem Url : https://codeforces.com/contest/1525/problem/D
    Verdict : Wrong answer on test 8
    Time : 15 ms
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

    int n;
    cin >> n;

    int a[n];
    rep(i, 0, n) cin >> a[i];

    int ans = 0;
    rep(i, 0, n){
        if(a[i] == 1){
            int l = i, r = i;
            while(a[l] != 0 && a[r] != 0){
                if(l != 0) l--;
                if(r != n - 1) r++;
            }

            if(a[l] == 0) a[l] = 2, ans += i - l;
            else a[r] = 2, ans += r - i;
        }
    }

    cout << ans;
}
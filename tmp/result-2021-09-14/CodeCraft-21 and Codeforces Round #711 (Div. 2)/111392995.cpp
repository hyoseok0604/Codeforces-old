/*
    Contest Name : CodeCraft-21 and Codeforces Round #711 (Div. 2)
    Problem Title : B - Box Fitting
    Problem Url : https://codeforces.com/contest/1498/problem/B
    Verdict : Wrong answer on pretest 2
    Time : 30 ms
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
        int n, w;
        cin >> n >> w;

        int a[n];
        rep(i, 0, n) cin >> a[i];

        sort(a, a + n);

        int ans = 1;
        int l = 0, r = n - 1;
        int emp = w;
        while(l < r){
            if(emp >= a[r]) emp -= a[r], r--;
            else if(emp >= a[l]) emp -= a[l], l++;
            else emp = w, ans++;
        }

        cout << ans << '\n';
    }
}
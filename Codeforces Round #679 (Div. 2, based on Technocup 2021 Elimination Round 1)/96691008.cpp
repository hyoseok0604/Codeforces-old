/*
    Contest Name : Codeforces Round #679 (Div. 2, based on Technocup 2021 Elimination Round 1)
    Problem Title : C - Perform Easily
    Problem Url : https://codeforces.com/contest/1435/problem/C
    Verdict : Wrong answer on pretest 7
    Time : 78 ms
    Memory : 500 KB
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

    int a[6];
    rep(i, 0, 6) cin >> a[i];

    int n;
    cin >> n;

    int b[n];
    rep(i, 0, n) cin >> b[i];
    
    sort(a, a + 6);
    sort(b, b + n);

    int x = 0;
    int y = 1e9;

    rep(i, 0, n){
        vector<int> v;
        rep(j, 0, 6){
            if(b[i] - a[j] < 0) continue;
            v.push_back(b[i] - a[j]);
        }
        sort(v.begin(), v.end());
        x = max(x, v[0]);
        y = min(y, v[v.size() - 1]);
    }

    cout << x - y;
}
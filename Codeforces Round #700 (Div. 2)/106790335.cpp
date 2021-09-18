/*
    Contest Name : Codeforces Round #700 (Div. 2)
    Problem Title : D1 - Painting the Array I
    Problem Url : https://codeforces.com/contest/1480/problem/D1
    Verdict : Wrong answer on pretest 6
    Time : 46 ms
    Memory : 1300 KB
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

    vector<int> w;
    vector<int> b;

    bool isW = true;

    w.push_back(a[0]);
    rep(i, 1, n){
        if(a[i] == a[i-1]){
            isW = !isW;
        }

        if(isW) w.push_back(a[i]);
        else b.push_back(a[i]);
    }

    int cw = w.size(), cb = b.size();
    rep(i, 1, w.size()){
        if(w[i] == w[i-1]) cw--;
    }
    rep(i, 1, b.size()){
        if(b[i] == b[i-1]) cb--;
    }
    
    cout << cw + cb;
}
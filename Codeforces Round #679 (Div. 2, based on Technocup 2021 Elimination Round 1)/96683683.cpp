/*
    Contest Name : Codeforces Round #679 (Div. 2, based on Technocup 2021 Elimination Round 1)
    Problem Title : C - Perform Easily
    Problem Url : https://codeforces.com/contest/1435/problem/C
    Verdict : Wrong answer on pretest 7
    Time : 46 ms
    Memory : 400 KB
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

    int cura = 0;
    int curb = 0;

    int nearMx = 0;
    int farMn = 1e9 + 100;

    while(cura < 6){
        while(b[curb] < a[cura]) curb++;
        nearMx = max(nearMx, b[curb] - a[cura]);
        cura++;
    }

    cout << b[n-1] - a[5] - nearMx;
}
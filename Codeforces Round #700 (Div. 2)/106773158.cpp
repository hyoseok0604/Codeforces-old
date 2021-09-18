/*
    Contest Name : Codeforces Round #700 (Div. 2)
    Problem Title : D1 - Painting the Array I
    Problem Url : https://codeforces.com/contest/1480/problem/D1
    Verdict : Wrong answer on pretest 6
    Time : 31 ms
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

    int n;
    cin >> n;

    int a[n];
    rep(i, 0, n) cin >> a[i];

    int al = 0, ac = 0;
    int bl = 0, bc = 0;
    rep(i, 0, n){
        if(a[i] != al){
            al = a[i];
            ac++;
        }else{
            if(a[i] != bl){
                bc++;
            }
            bl = a[i];
        }
    }

    cout << ac + bc;
}
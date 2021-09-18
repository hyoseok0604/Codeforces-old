/*
    Contest Name : Codeforces Round #707 (Div. 2, based on Moscow Open Olympiad in Informatics)
    Problem Title : A - Alexey and Train
    Problem Url : https://codeforces.com/contest/1501/problem/A
    Verdict : Wrong answer on pretest 2
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

    TC{
        int n;
        cin >> n;

        lli ans = 0;

        lli a[n], b[n];
        rep(i, 0, n){
            cin >> a[i] >> b[i];
        }

        lli d[n];
        rep(i, 0, n){
            cin >> d[i];
        }

        lli arr = a[0] + d[0];
        rep(i, 0, n){
            if(i > 0) arr += a[i] + d[i] - b[i-1];
            arr = max(arr, max(arr + ((b[i] - a[i] + 1) / 2), b[i]));
        }

        cout << arr - 1 << '\n';
    }
}
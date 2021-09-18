/*
    Contest Name : Codeforces Round #698 (Div. 2)
    Problem Title : B - Nezzar and Lucky Number
    Problem Url : https://codeforces.com/contest/1478/problem/B
    Verdict : Wrong answer on pretest 2
    Time : 31 ms
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
        int q, d;
        cin >> q >> d;

        int a[q];
        rep(i, 0, q) cin >> a[i];

        int ans[10];
        mset(0, ans);
        rep1(i, 1, 10){
            int tmp = i * d;

            if(ans[tmp % 10] == 0) ans[tmp % 10] = tmp; 
        }

        rep(i, 0, q){
            if(a[i] >= ans[a[i] % 10]) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
/*
    Contest Name : Codeforces Round #707 (Div. 2, based on Moscow Open Olympiad in Informatics)
    Problem Title : B - Napoleon Cake
    Problem Url : https://codeforces.com/contest/1501/problem/B
    Verdict : Accepted
    Time : 77 ms
    Memory : 1600 KB
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

        int a[n];
        rep(i, 0, n) cin >> a[i];

        int ans[n];
        mset(0, ans);
        rep2(i, n - 1, 0){
            ans[i]++;
            if(i-a[i] >= 0) ans[i-a[i]]--;
        }
        rep2(i, n - 2, 0){
            ans[i] += ans[i+1];
        }
        rep(i, 0, n){
            if(ans[i] != 0) cout << "1 ";
            else cout << "0 ";
        }
        cout << '\n';
    }
}
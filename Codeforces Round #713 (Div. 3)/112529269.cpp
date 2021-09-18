/*
    Contest Name : Codeforces Round #713 (Div. 3)
    Problem Title : F - Education
    Problem Url : https://codeforces.com/contest/1512/problem/F
    Verdict : Wrong answer on test 3
    Time : 78 ms
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
        int n, c;
        cin >> n >> c;

        lli a[n];
        rep(i, 0, n) cin >> a[i];

        lli b[n-1];
        rep(i, 0, n - 1) cin >> b[i];

        lli ans = 1e16;
        lli dayToUp = 0;
        lli remainMoney = 0;
        rep(i, 0, n){
            ans = min(dayToUp + max(0LL, (c + a[i] - 1 - remainMoney)) / a[i], ans);
            if(i == n - 1) continue;
            if(remainMoney >= b[i]){
                dayToUp++;
                remainMoney -= b[i];
            }else{
                dayToUp += (b[i] + a[i] - 1 - remainMoney) / a[i] + 1;
                remainMoney = (b[i] + a[i] - 1 - remainMoney) / a[i] * a[i] - b[i];
            }
        }

        cout << ans << '\n';
    }
}
/*
    Contest Name : Codeforces Round #694 (Div. 2)
    Problem Title : C - Strange Birthday Party
    Problem Url : https://codeforces.com/contest/1471/problem/C
    Verdict : Wrong answer on pretest 3
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
        int n, m;
        cin >> n >> m;

        int k[n];
        rep(i, 0, n) cin >> k[i];

        int c[m];
        rep(i, 0, m) cin >> c[i];

        int cnt[m+1];
        mset(0, cnt);
        rep(i, 0, n){
            cnt[k[i]]++;
        }

        lli ans = 0;
        int cur = 0;
        rep2(i, m, 1){
            if(cnt[i] == 0) continue;

            if(i == cur - 1) break;

            while(cnt[i] != 0){
                cnt[i]--;
                ans += c[cur++];

                if(cur >= m || i == cur - 1) break;
            }

            if(cur >= m || i == cur - 1) break;
        }

        rep2(i, m, 1){
            ans += c[i-1] * cnt[i];
        }

        cout << ans << '\n';
    }
}
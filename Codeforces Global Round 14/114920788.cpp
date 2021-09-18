/*
    Contest Name : Codeforces Global Round 14
    Problem Title : D - Phoenix and Socks
    Problem Url : https://codeforces.com/contest/1515/problem/D
    Verdict : Accepted
    Time : 764 ms
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
        int n, l, r;
        cin >> n >> l >> r;

        lli ans = 0;

        int L[200001];
        int R[200001];

        mset(0, L);
        mset(0, R);

        rep(i, 0, l){
            int k;
            cin >> k;

            L[k]++;
        }

        rep(i, 0, r){
            int k;
            cin >> k;

            R[k]++;
        }

        int b = 0;
        rep1(i, 1, 200000){
            int mn = min(L[i], R[i]);
            L[i] -= mn;
            R[i] -= mn;

            if(l > r){
                int tmp = min((l - r) / 2, L[i] / 2);
                ans += tmp;
                l -= tmp;
                r += tmp;
                L[i] -= tmp * 2;
            }

            if(l < r){
                int tmp = min((r - l) / 2, R[i] / 2);
                ans += tmp;
                r -= tmp;
                l += tmp;
                R[i] -= tmp * 2;
            }

            b += L[i] + R[i];
        }

        // cout3(ans, b / 2, (max(l, r) - min(l, r)) / 2);
        cout << ans + b / 2 + (max(l, r) - min(l, r)) / 2 << '\n';
    }
}

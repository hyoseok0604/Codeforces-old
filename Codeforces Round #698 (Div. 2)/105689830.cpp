/*
    Contest Name : Codeforces Round #698 (Div. 2)
    Problem Title : B - Nezzar and Lucky Number
    Problem Url : https://codeforces.com/contest/1478/problem/B
    Verdict : Runtime error on pretest 3
    Time : 109 ms
    Memory : 200 KB
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

        vector<int> v; // 5천?
        // 10000
        rep1(i, 1, 10000){
            int tmp = i;
            while(tmp != 0){
                if(tmp % 10 == d){
                    v.push_back(i);
                    break;
                }
                tmp /= 10;
            }
        }

        bool dp[10001];
        mset(0, dp);

        rep(i, 0, v.size()){
            dp[v[i]] = true;
        }

        rep1(i, 1, 10000){
            if(dp[i]){
                rep(j, 0, v.size()){
                    if(i + v[j] > 10000) break;
                    dp[i+v[j]] = true;
                }
            }
        }

        rep(i, 0, q){
            if(dp[a[i]]) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
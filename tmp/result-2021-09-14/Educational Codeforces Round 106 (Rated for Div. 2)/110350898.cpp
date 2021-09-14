/*
    Contest Name : Educational Codeforces Round 106 (Rated for Div. 2)
    Problem Title : C - Minimum Grid Path
    Problem Url : https://codeforces.com/contest/1499/problem/C
    Verdict : Wrong answer on test 2
    Time : 0 ms
    Memory : 100 KB
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

        vector<int> c1;
        vector<int> c2;
        rep(i, 0, n){
            int k;
            cin >> k;
            if(i % 2 == 0) c1.push_back(k);
            else c2.push_back(k);
        }

        int mn1, mn2;
        int idx1 = 0;
        int idx2 = 0;
        mn1 = mn2 = 1e9;
        rep(i, 0, c1.size()){
            if(c1[i] < mn1){
                mn1 = c1[i];
                idx1 = i;
            }
        }
        rep(i, 0, c2.size()){
            if(c2[i] < mn2){
                mn2 = c2[i];
                idx2 = i;
            }
        }

        // cout4(idx1, idx2, mn1, mn2);

        lli ans = 0;
        rep(i, 0, idx1){
            ans += c1[i];
        }
        rep(i, 0, idx2){
            ans += c2[i];
        }
        ans += c1[idx1] * (n - idx1);
        ans += c2[idx2] * (n - idx2);

        cout << ans << '\n';
    }
}
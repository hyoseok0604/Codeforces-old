/*
    Contest Name : Codeforces Round #721 (Div. 2)
    Problem Title : C - Sequence Pair Weight
    Problem Url : https://codeforces.com/contest/1527/problem/C
    Verdict : Wrong answer on pretest 2
    Time : 0 ms
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

        int a[n];
        rep(i, 0, n) cin >> a[i];

        vector<pair<int, int>> v;
        rep(i, 0, n){
            v.push_back({a[i], i});
        }

        sort(a, a + n);
        sort(v.begin(), v.end());

        vector<int> cnt;
        rep(i, 0, n){
            int c = 0;
            while(a[i] == a[i+c]) c++;
            cnt.push_back(c);
            i += c - 1;
        }

        lli ans = 0;
        int cur = 0;
        int ps = 0;
        rep(i, 0, cnt.size()){
            if(cnt[i] == 1) continue;
            rep(j, 0, cnt[i]){
                ans += j * (n - 1 - v[j + ps].second);
                ans += (cnt[i] - 1 - j) * (v[j+ps].second - 0);
                ans += 1;
            }
        }
        cout << ans << '\n';
    }
}
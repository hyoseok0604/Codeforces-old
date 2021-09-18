/*
    Contest Name : Codeforces Global Round 14
    Problem Title : C - Phoenix and Towers
    Problem Url : https://codeforces.com/contest/1515/problem/C
    Verdict : Accepted
    Time : 62 ms
    Memory : 2600 KB
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
        int n, m, x;
        cin >> n >> m >> x;

        pair<int, int> h[n];
        rep(i, 0, n) cin >> h[i].first, h[i].second = i;

        sort(h, h + n);

        vector<int> v(m, 0);

        int ans[n];
        int cur = 0;
        stack<pair<int, int>> s;
        while(cur < n){
            int i = 0;
            while(i + cur < n && i < m){
                s.push(h[i+cur]);
                i++;
            }
            while(!s.empty()){
                pair<int, int> now = s.top();
                s.pop();

                v[s.size()] += now.first;
                ans[now.second] = s.size() + 1;
            }

            cur += m;
            sort(v.begin(), v.end());
        }
        
        if(abs(v[m-1] - v[0]) > x) cout << "NO\n";
        else{
            cout << "YES\n";
            rep(i, 0, n) cout << ans[i] << ' ';
            cout << '\n';
        }
    }
}

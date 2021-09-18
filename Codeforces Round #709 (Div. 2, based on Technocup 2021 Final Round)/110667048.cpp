/*
    Contest Name : Codeforces Round #709 (Div. 2, based on Technocup 2021 Final Round)
    Problem Title : C - Basic Diplomacy
    Problem Url : https://codeforces.com/contest/1484/problem/C
    Verdict : Accepted
    Time : 280 ms
    Memory : 4500 KB
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
    // fastIO();

    TC{
        int n, m;
        cin >> n >> m;

        vector<int> v[m];
        rep(i, 0, m){
            int k;
            cin >> k;
            rep(j, 0, k){
                int l;
                cin >> l;

                v[i].push_back(l);
            }
        }

        pair<int, int> count[m];
        rep(i, 0, m){
            count[i] = {v[i].size(), i};
        }

        sort(count, count + m);

        int c[n + 1];
        int ans[m];
        mset(0, c);
        mset(0, ans);
        rep(i, 0, m){
            int cur = 0;
            int cnt = count[i].first;
            int tar = count[i].second;
            // cout2("tar", tar);
            while(cur < v[tar].size() && c[v[tar][cur]] >= (m + 1) / 2){
                cur++;
                // cout << cur << '\n';
            }
            if(cur >= v[tar].size()) continue;
            c[v[tar][cur]]++;
            ans[tar] = v[tar][cur];
        }

        bool f = true;
        rep(i, 0, m) f &= ans[i] != 0;
        if(f){
            cout << "YES\n";
            rep(i, 0, m){
                cout << ans[i] << ' ';
            }
            cout << '\n';
        }else{
            cout << "NO\n";
        }
    }
}
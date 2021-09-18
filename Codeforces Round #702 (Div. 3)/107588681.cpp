/*
    Contest Name : Codeforces Round #702 (Div. 3)
    Problem Title : E - Accidental Victory
    Problem Url : https://codeforces.com/contest/1490/problem/E
    Verdict : Wrong answer on test 2
    Time : 31 ms
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
        int n;
        cin >> n;

        vector<pair<lli, int>> a(n);
        rep(i, 0, n) cin >> a[i].first, a[i].second = i;

        sort(a.begin(), a.end());

        a.push_back({0, 0});

        bool cantWin[n];
        mset(0, cantWin);

        int count = 0;
        int idx = 0;
        lli prefix = 0;
        rep(i, 0, n){
            vector<int> v;
            while(i < n && a[i].first == a[i+1].first) prefix += a[i].first, v.push_back(i++);
            if(a[i].first + prefix < a[i+1].first){
                rep(j, 0, v.size()){
                    idx = max(idx, a[v[j]].second + 1);
                }
                idx = max(idx, a[i].second + 1);
            }
            prefix += a[i].first;
        }

        cout << n - idx << '\n';
        rep1(i, idx + 1, n) cout << i << ' ';
        cout << '\n';
    }
}
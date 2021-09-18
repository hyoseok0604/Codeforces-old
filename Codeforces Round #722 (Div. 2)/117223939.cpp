/*
    Contest Name : Codeforces Round #722 (Div. 2)
    Problem Title : C - Parsa's Humongous Tree
    Problem Url : https://codeforces.com/contest/1529/problem/C
    Verdict : Accepted
    Time : 748 ms
    Memory : 19800 KB
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

vector<int> g[200005];
vector<int> g2[200005];

bool visited[200005];
lli dp[200005][5];

int l[200005];
int r[200005];

void dfs(int now){
    visited[now] = true;

    rep(i, 0, g[now].size()){
        int next = g[now][i];
        if(!visited[next]){
            g2[now].push_back(next);
            dfs(next);
        }
    }
}

lli solve(int now, int type){
    if(dp[now][type] != 0) return dp[now][type];

    for(int i = 0 ; i < g2[now].size() ; i++){
        lli k = 0;
        int next = g2[now][i];
        if(type != 1 && type != 3){
            k = max(k, solve(next, 3) + abs(r[now] - l[next]));
            k = max(k, solve(next, 4) + abs(r[now] - r[next]));
        }
        if(type != 2 && type != 4){
            k = max(k, solve(next, 1) + abs(l[now] - l[next]));
            k = max(k, solve(next, 2) + abs(l[now] - r[next]));
        }

        dp[now][type] += k;
    }

    return dp[now][type];
}

int main(){
    fastIO();

    TC{
        mset(0, l);
        mset(0, r);
        mset(0, dp);
        mset(0, visited);
        mset(0, g);
        mset(0, g2);
        
        int n;
        cin >> n;

        rep1(i, 1, n){
            cin >> l[i] >> r[i];
        }

        rep(i, 0, n - 1){
            int a, b;
            cin >> a >> b;

            g[a].push_back(b);
            g[b].push_back(a);
        }

        dfs(1);

        solve(1, 1);
        solve(1, 2);
        solve(1, 3);
        solve(1, 4);
        
        cout << max(max(dp[1][1], dp[1][2]), max(dp[1][3], dp[1][4])) << '\n';
    }
}
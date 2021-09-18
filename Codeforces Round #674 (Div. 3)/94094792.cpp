/*
    Contest Name : Codeforces Round #674 (Div. 3)
    Problem Title : E - Rock, Paper, Scissors
    Problem Url : https://codeforces.com/contest/1426/problem/E
    Verdict : Accepted
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

int c[10][10], f[10][10];
vector<vector<int>> v(10);

int flow(int s, int e){
    int ans = 0;
    while(1){
        vector<int> par(52, -1);
        queue<int> q;
        q.push(s);

        while(!q.empty() && par[e] == -1){
            int vtx = q.front();
            q.pop();

            rep(i, 0, v[vtx].size()){
                int next = v[vtx][i];
                if(par[next] == -1 && c[vtx][next] > f[vtx][next]){
                    par[next] = vtx;
                    q.push(next);
                }
            }
        }

        if(par[e] == -1) break;

        int d = 1e9;
        for(int i = e ; i != s ; i=par[i]){
            d = min(d, c[par[i]][i] - f[par[i]][i]);
        }

        for(int i = e ; i != s ; i=par[i]){
            f[par[i]][i] += d;
            f[i][par[i]] -= d;
        }

        ans += d;
    }

    return ans;
}

int main(){
    fastIO();

    int n;
    cin >> n;

    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;

    int b1, b2, b3;
    cin >> b1 >> b2 >> b3;

    // 0
    // 1 2 3
    // 4 5 6
    // 7

    v[0].push_back(1);
    v[0].push_back(2);
    v[0].push_back(3);

    rep1(i, 1, 3){
        v[0].push_back(i);
        v[i].push_back(0);
    }

    v[4].push_back(7);
    v[5].push_back(7);
    v[6].push_back(7);

    rep1(i, 4, 6){
        v[i].push_back(7);
        v[7].push_back(i);
    }

    v[1].push_back(6);
    v[1].push_back(4);

    v[6].push_back(1);
    v[4].push_back(1);

    v[2].push_back(4);
    v[2].push_back(5);

    v[4].push_back(2);
    v[5].push_back(2);

    v[3].push_back(5);
    v[3].push_back(6);

    v[5].push_back(3);
    v[6].push_back(3);

    c[0][1] = a1;
    c[0][2] = a2;
    c[0][3] = a3;

    c[4][7] = b1;
    c[5][7] = b2;
    c[6][7] = b3;

    c[1][4] = max(a1, b1);
    c[1][6] = max(a1, b3);

    c[2][4] = max(a2, b1);
    c[2][5] = max(a2, b2);
    
    c[3][5] = max(a3, b2);
    c[3][6] = max(a3, b3);


    int ans1 = n - flow(0, 7);
    int ans2 = min(a1, b2) + min(a2, b3) + min(a3, b1);
    cout << ans1 << ' ' << ans2;
}
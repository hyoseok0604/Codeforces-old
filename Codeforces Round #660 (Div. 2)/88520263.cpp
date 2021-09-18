/*
    Contest Name : Codeforces Round #660 (Div. 2)
    Problem Title : C - Uncle Bogdan and Country Happiness
    Problem Url : https://codeforces.com/contest/1388/problem/C
    Verdict : Accepted
    Time : 889 ms
    Memory : 11500 KB
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
#define rep(i, a, b) for(int i = a ; i < b ; i++)
#define repR(i, a, b) for(int i = a ; i > b ; i--)
#define int lli

int people[100001];
int p[100001];
bool visited[100001];
int need_good[100001];

// 전부 기분이 좋지 않았다고 가정?
int dfs(vector<vector<int>> &v, int vtx){
    int sum = 0;
    visited[vtx] = true;
    for(int i = 0 ; i < v[vtx].size() ; i++){
        if(!visited[v[vtx][i]]) sum += dfs(v, v[vtx][i]);
    }
    return -(people[vtx] = -(sum + p[vtx]));
}

bool dfs2(vector<vector<int>> &v, int vtx, int par){
    int ans = true;
    int count = 0;
    visited[vtx] = true;
    for(int i = 0 ; i < v[vtx].size() ; i++){
        if(visited[v[vtx][i]]) continue;
        count += need_good[v[vtx][i]];
        ans = ans && dfs2(v, v[vtx][i], vtx);
    }

    return ans && (count <= need_good[vtx]);
}

signed main(){
    fastIO();

    TC{
        mset(0, people);
        mset(0, p);
        mset(0, visited);
        mset(0, need_good);
        
        int n, m; // n 도시의 개수, m 총 사람 수
        cin >> n >> m;

        rep(i, 1, n+1) cin >> p[i]; // i 번째 도시에 사는 사람 수

        int h[n+1];
        rep(i, 1, n+1) cin >> h[i]; // i 번째 도시의 계산된 행복도
        
        vector<vector<int>> v(n+1);

        rep(i, 0, n-1){
            int a, b;
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }

        dfs(v, 1);

        bool flag = false;

        rep(i, 1, n+1){
            if(h[i] < people[i]){
                cout << "NO\n";
                flag = true;
                break;
            }
            if((h[i] - people[i]) % 2 != 0){
                cout << "NO\n";
                flag = true;
                break;
            }

            if((h[i] - people[i]) / 2 > -people[i]){
                cout << "NO\n";
                flag = true;
                break;
            }
        }

        if(flag) continue;

        rep(i, 1, n+1){
            need_good[i] = (h[i] - people[i]) / 2;
            // cout << need_good[i] << '\n';
        }

        mset(0, visited);

        bool can = dfs2(v, 1, 1);

        if(can) cout << "YES\n";
        else cout << "NO\n";
    }
}
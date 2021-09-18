/*
    Contest Name : Codeforces Round #641 (Div. 2)
    Problem Title : B - Orac and Models
    Problem Url : https://codeforces.com/contest/1350/problem/B
    Verdict : Time limit exceeded on pretest 2
    Time : 3000 ms
    Memory : 4100 KB
*/

#include<bits/stdc++.h>

using namespace std;

int N;
int ans = 0;

int dp[100001];

void dfs(vector<int> &v, int before, int n, int count){
    if(v[n] % before == 0){
        dp[n] = count+1;
        before = v[n];
    }
    if(n == N - 1) ans = max(ans, dp[n]);
    for(int i = n + 1 ; i < N ; i++){
        if(dp[n] >= dp[i]) dfs(v, before, i, dp[n]);
    }
}

int main(){
    int T;
    cin >> T;
    while(T--){
        ans = 0;
        cin >> N;
        memset(dp, 0, sizeof(dp));
        vector<int> v(N);
        for(int i = 0 ; i < N ; i++){
            cin >> v[i];
        }
        for(int i = 0 ; i < N ; i++){
            if(dp[i] == 0) dfs(v, 1, i, 0);
        }

        cout << ans << '\n';
    }
}
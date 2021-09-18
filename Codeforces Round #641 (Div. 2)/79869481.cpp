/*
    Contest Name : Codeforces Round #641 (Div. 2)
    Problem Title : B - Orac and Models
    Problem Url : https://codeforces.com/contest/1350/problem/B
    Verdict : Wrong answer on pretest 2
    Time : 280 ms
    Memory : 3700 KB
*/

#include<bits/stdc++.h>

using namespace std;

int N;
int ans = 1;

void dfs(vector<int> &v, int n, int count){
    for(int i = n + 1 ; i < N ; i++){
        if(v[i] % v[n] == 0 && v[i] > v[n]){
            ans = max(ans, count + 1);
            dfs(v, i, count + 1);
        }
    }
}

int main(){
    int T;
    cin >> T;
    while(T--){
        ans = 1;
        cin >> N;
        vector<int> v(N);
        for(int i = 0 ; i < N ; i++){
            cin >> v[i];
        }

        for(int i = 0 ; i < N ; i++){
            dfs(v, i, 1);
        }

        cout << ans << '\n';
    }
}
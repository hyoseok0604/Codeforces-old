/*
    Contest Name : Codeforces Round #659 (Div. 2)
    Problem Title : B1 - Koa and the Beach (Easy Version)
    Problem Url : https://codeforces.com/contest/1384/problem/B1
    Verdict : Accepted
    Time : 31 ms
    Memory : 3700 KB
*/

#include<bits/stdc++.h>

using namespace std;

#define lli long long
#define TC int TC;cin>>TC;while(TC--)
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0)
#define uMin(a, b) a = min(a, b);
#define uMax(a, b) a = max(a, b);
#define mset(a, arr) memset(arr, a, sizeof(arr))

int main(){
    fastIO();

    TC{
        int n, k, l;
        cin >> n >> k >> l;

        int arr[n+1][k * 2];
        mset(0, arr);
        int p[k*2];
        mset(0, p);
        for(int i = 0 ; i < k * 2 ; i++){
            if(i <= k) p[i] = i;
            else p[i] = k + k - i;
        }

        for(int i = 1 ; i <= n ; i++){
            cin >> arr[i][0];
            for(int j = 0 ; j < k * 2 ; j++){
                arr[i][j] = arr[i][0] + p[j];
            }
        }

        bool v[n+1][k*2];
        mset(0, v);
        queue<pair<int, int>> q;
        for(int i = 0 ; i < k * 2 ; i++){
            q.push({0, i});
            v[0][i] = true;
        }

        bool flag = false;

        while(!q.empty()){
            int pos = q.front().first;
            int t = q.front().second;
            q.pop();

            if(pos == n){
                flag = true;
                break;
            }

            int npos = pos + 1;
            int nt = (t + 1) % (k * 2);

            if(!v[npos][nt] && (arr[npos][nt] <= l)) q.push({npos, nt}), v[npos][nt] = true;
            if(!v[pos][nt] && (arr[pos][nt] <= l)) q.push({pos, nt}), v[npos][nt] = true;
        }

        if(flag) cout << "YES\n";
        else cout << "No\n";
    }
}
/*
    Contest Name : Codeforces Round #664 (Div. 2)
    Problem Title : C - Boboniu and Bit Operations
    Problem Url : https://codeforces.com/contest/1395/problem/C
    Verdict : Time limit exceeded on pretest 4
    Time : 1000 ms
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

int arr[200][200];

int ans = 1e9;

int n, m;

int a[200], b[200];

int val = 0;

void f(int v){
    if(val > ans) return;

    if(v == n){
        if(ans > val){
            ans = val;
        }
        return;
    }

    for(int i = 0 ; i < m ; i++){
        if(val > ans) return;
        int tmp = val;
        val = (val | arr[v][i]);
        f(v + 1);
        val = tmp;
    }
}

int main(){
    fastIO();

    cin >> n >> m;

    rep(i, 0, n){
        cin >> a[i];
    }
    rep(i, 0, m){
        cin >> b[i];
    }

    rep(i, 0, n){
        rep(j, 0, m){
            arr[i][j] = (a[i] & b[j]);
        }
        sort(arr[i], arr[i] + m);
    }

    f(0);

    cout << ans;
}
/*
    Contest Name : Codeforces Round #661 (Div. 3)
    Problem Title : C - Boats Competition
    Problem Url : https://codeforces.com/contest/1399/problem/C
    Verdict : Accepted
    Time : 249 ms
    Memory : 3700 KB
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

int main(){
    fastIO();
    
    TC{
        int n;
        cin >> n;

        int arr[n];
        rep(i, 0, n) cin >> arr[i];

        bool use[n];

        int ans = 0;

        rep(i, 2, n * 2 + 1){
            int now_ans = 0;
            mset(0, use);
            rep(j, 0, n){
                rep(k, j + 1, n){
                    if(j == k) continue;
                    if(use[j] || use[k]) continue;
                    if(arr[j] + arr[k] == i){
                        use[j] = true;
                        use[k] = true;
                        now_ans++;
                    }
                }
            }
            uMax(ans, now_ans);
        }

        cout << ans << '\n';
    }
}
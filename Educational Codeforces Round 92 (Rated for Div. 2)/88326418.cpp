/*
    Contest Name : Educational Codeforces Round 92 (Rated for Div. 2)
    Problem Title : B - Array Walk
    Problem Url : https://codeforces.com/contest/1389/problem/B
    Verdict : Wrong answer on test 2
    Time : 78 ms
    Memory : 5800 KB
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

int dp[100000][5];

int main(){
    fastIO();

    TC{
        int n, k, z;
        cin >> n >> k >> z;

        int kk = k;
        int arr[n];
        rep(i, 0, n){
            cin >> arr[i];
        }

        int ans = 0;
        
        rep(i, 0, k + 1){
            ans += arr[i];
        }
        
        vector<pair<int, int>> two_sum(k);
        int arr_two_sum[k+1];
        rep(i, 1, k+1){
            two_sum[i-1] = {arr[i] + arr[i-1], i};
            arr_two_sum[i] = arr[i] + arr[i-1];
        }

        sort(two_sum.begin(), two_sum.end());

        // for(int i = 0 ; i < two_sum.size() ; i++){
        //     cout << two_sum[i].first << ' ' << two_sum[i].second << '\n';
        // }

        int idx = two_sum.size() - 1;
        while(idx >= 0 && two_sum[idx].second < k && z > 0){
            ans -= arr_two_sum[k];
            k-=2;
            z--;
            ans += two_sum[idx].first;
            idx--;
        }

        // if(k % 2 == 1){
        //     cout << idx;
        //     cout << two_sum[idx+1].second;
        // }

        cout << ans << '\n';
    }
}
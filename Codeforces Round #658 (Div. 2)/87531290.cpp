/*
    Contest Name : Codeforces Round #658 (Div. 2)
    Problem Title : A - Common Subsequence
    Problem Url : https://codeforces.com/contest/1382/problem/A
    Verdict : Accepted
    Time : 30 ms
    Memory : 3600 KB
*/

#include<bits/stdc++.h>

using namespace std;

#define lli long long
#define TC int TC;cin>>TC;while(TC--)

int main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    TC{
        int n, m;
        cin >> n >> m;
        int arr[1001];
        bool flag = true;
        memset(arr, 0, sizeof(arr));
        for(int i = 0 ; i < n ; i++){
            int k;
            cin >> k;
            arr[k]++;
        }
        int ans;
        for(int j = 0 ; j < m ; j++){
            int k;
            cin >> k;
            if(arr[k] > 0){
                flag = false;
                ans = k;
            }
        }

        if(flag) cout << "NO\n";
        else cout << "YES\n" << "1 " << ans << '\n';
    }
}
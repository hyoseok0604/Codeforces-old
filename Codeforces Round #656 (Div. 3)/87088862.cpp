/*
    Contest Name : Codeforces Round #656 (Div. 3)
    Problem Title : B - Restore the Permutation by Merger
    Problem Url : https://codeforces.com/contest/1385/problem/B
    Verdict : Accepted
    Time : 31 ms
    Memory : 3600 KB
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        bool arr[n+1];
        memset(arr, 0, sizeof(arr));
        for(int i = 0 ; i < n*2 ; i++){
            int k;
            cin >> k;
            if(!arr[k]) cout << k << ' ', arr[k] = true;
        }
        cout << '\n';
    }
}
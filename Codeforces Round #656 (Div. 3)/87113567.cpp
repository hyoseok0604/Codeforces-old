/*
    Contest Name : Codeforces Round #656 (Div. 3)
    Problem Title : C - Make It Good
    Problem Url : https://codeforces.com/contest/1385/problem/C
    Verdict : Accepted
    Time : 77 ms
    Memory : 5200 KB
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

        int arr[n];
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
        }
        
        int a[n];
        for(int i = 1 ; i < n ; i++){
            if(arr[i] > arr[i-1]) a[i] = 1;
            if(arr[i] == arr[i-1]) a[i] = 0;
            if(arr[i] < arr[i-1]) a[i] =  -1;
        }

        

        int ans = 0;

        int st = 0;

        for(int i = n - 1 ; i > 0 ; i--){
            if(st == 0 && a[i] != 0) st = a[i];
            else if(st == 1 && a[i] == -1){
                ans = i;
                break;
            }else if(st == -1 && a[i] == 1) st = 1;
        }
        
        cout << ans << '\n';
    }
}
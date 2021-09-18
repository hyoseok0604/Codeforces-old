/*
    Contest Name : Codeforces Round #659 (Div. 2)
    Problem Title : A - Common Prefixes
    Problem Url : https://codeforces.com/contest/1384/problem/A
    Verdict : Wrong answer on pretest 2
    Time : 30 ms
    Memory : 3600 KB
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
        int n;
        cin >> n;

        int arr[n+2];
        mset(0, arr);
        for(int i = 1 ; i <= n ; i++){
            cin >> arr[i];
        }

        bool a = true;

        for(int i = 1 ; i <= n + 1 ; i++){
            int l = max(arr[i], arr[i-1]);
            if(arr[i-1] == 0){
                a = !a;
                if(arr[i] == 0){
                    if(a) cout << 'a';
                    else cout << 'b';
                }
            }
            for(int j = 0 ; j < l ; j++){
                if(a) cout << 'a';
                else cout << 'b';
            }
            cout << '\n';
        }
    }
}
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

    string s = "";
    char c = 'a';
    for(int i = 0 ; i <= 50 ; i++){
        s += c;
    }

    TC{
        int n;
        cin >> n;

        int arr[n+1];
        for(int i = 1 ; i <= n ; i++){
            cin >> arr[i];
        }

        cout << s << '\n';

        for(int i = 1 ; i <= n ; i++){
            s[arr[i]]++;
            cout << s << '\n';
        }
    }
}
/*
    Contest Name : Codeforces Round #671 (Div. 2)
    Problem Title : D2 - Sage's Birthday (hard version)
    Problem Url : https://codeforces.com/contest/1419/problem/D2
    Verdict : Wrong answer on test 67
    Time : 92 ms
    Memory : 800 KB
*/

#include<bits/stdc++.h>

using namespace std;

#define lli long long
#define TC int TC;cin>>TC;while(TC--)
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0)
#define uMin(a, b) a = min(a, b)
#define uMax(a, b) a = max(a, b)
#define mset(a, arr) memset(arr, a, sizeof(arr))

#define rep(i, a, b) for(int i = (a) ; i < (b) ; i++)
#define rep1(i, a, b) for(int i = (a) ; i <= (b) ; i++)
#define rep2(i, a, b) for(int i = (a) ; i >= (b) ; i--)

#define cout1(a) cout << a << '\n'
#define cout2(a, b) cout << a << ' ' << b << '\n'
#define cout3(a, b, c) cout << a << ' ' << b << ' ' << c << '\n'
#define cout4(a, b, c, d) cout << a << ' ' << b << ' ' << c << ' ' << d << '\n'

int main(){
    fastIO();

    int n;
    cin >> n;

    int arr[n];
    rep(i, 0, n){
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int idx = 0;
    int ans[n];
    mset(0, ans);

    rep(i, 0, (n - 1) / 2){
        ans[i * 2 + 1] = arr[idx++];
    }

    rep(i, 0, n){
        if(ans[i] == 0){
            ans[i] = arr[idx++];
        }
    }

    int a = 0;
    rep(i, 1, n-1){
        if(ans[i] < ans[i-1] && ans[i] < ans[i+1]) a++;
    }

    cout << a << '\n';
    rep(i, 0, n) cout << ans[i] << ' ';
}
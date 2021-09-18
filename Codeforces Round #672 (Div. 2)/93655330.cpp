/*
    Contest Name : Codeforces Round #672 (Div. 2)
    Problem Title : A - Cubes Sorting
    Problem Url : https://codeforces.com/contest/1420/problem/A
    Verdict : Accepted
    Time : 46 ms
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

#define rep(i, a, b) for(int i = (a) ; i < (b) ; i++)
#define rep1(i, a, b) for(int i = (a) ; i <= (b) ; i++)
#define rep2(i, a, b) for(int i = (a) ; i >= (b) ; i--)

#define cout1(a) cout << a << '\n'
#define cout2(a, b) cout << a << ' ' << b << '\n'
#define cout3(a, b, c) cout << a << ' ' << b << ' ' << c << '\n'
#define cout4(a, b, c, d) cout << a << ' ' << b << ' ' << c << ' ' << d << '\n'

int main(){
    fastIO();

    TC{
        int n;
        cin >> n;

        int arr[n];
        rep(i, 0, n) cin >> arr[i];

        int cnt = 0;
        rep(i, 1, n){
            if(arr[i] < arr[i-1]) cnt++;
        }

        if(cnt == n-1){
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
    }
}
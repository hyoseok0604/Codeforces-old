/*
    Contest Name : Divide by Zero 2021 and Codeforces Round #714 (Div. 2)
    Problem Title : A - Array and Peaks
    Problem Url : https://codeforces.com/contest/1513/problem/A
    Verdict : Accepted
    Time : 15 ms
    Memory : 0 KB
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

#define cout1(a) cout << a << '\n'
#define cout2(a, b) cout << a << ' ' << b << '\n'
#define cout3(a, b, c) cout << a << ' ' << b << ' ' << c << '\n'
#define cout4(a, b, c, d) cout << a << ' ' << b << ' ' << c << ' ' << d << '\n'

int main(){
    fastIO();

    TC{
        int n, k;
        cin >> n >> k;

        if((n - 1) / 2 < k){
            cout << "-1\n";
            continue;
        }

        int c = 0;
        int now = 1;
        int mx = n;
        rep(i, 0, n){
            if(i > 0 && i < n - 1 && i % 2 == 1 && c < k){
                c++;
                cout << mx << ' ';
                mx--;
            }else{
                cout << now << ' ';
                now++;
            }
        }

        cout << '\n';
    }
}
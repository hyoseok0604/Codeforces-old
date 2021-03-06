/*
    Contest Name : Codeforces Round #713 (Div. 3)
    Problem Title : D - Corrupted Array
    Problem Url : https://codeforces.com/contest/1512/problem/D
    Verdict : Accepted
    Time : 93 ms
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
        int n;
        cin >> n;

        int b[n+2];
        lli sum = 0;
        rep(i, 0, n + 2) cin >> b[i], sum += b[i];

        sort(b, b + n + 2);

        int ans = -1;

        rep(i, 0, n + 2){
            sum -= b[i];
            int mxIdx = n + 1;
            if(mxIdx == i) mxIdx--;
            if(sum - b[mxIdx] == b[mxIdx]) ans = i;
            sum += b[i];
        }

        if(ans == -1){
            cout << "-1\n";
            continue;
        }

        int mxIdx = n + 1;
        if(mxIdx == ans) mxIdx--;
        rep(i, 0, n + 2){
            if(i == mxIdx || i == ans) continue;
            cout << b[i] << ' ';
        }
        cout << '\n';
    }
}
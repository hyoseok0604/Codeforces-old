/*
    Contest Name : Codeforces Round #665 (Div. 2)
    Problem Title : B - Ternary Sequence
    Problem Url : https://codeforces.com/contest/1401/problem/B
    Verdict : Accepted
    Time : 31 ms
    Memory : 3600 KB
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

int main(){
    fastIO();

    TC{
        int a, b, c, x, y, z;
        cin >> a >> b >> c >> x >> y >> z;
        int d = a + b + c - min(c, y);
        int w = x + y + z - min(c, y);

        int i = z - d + b;
        int j = b - w + z;

        int ans = 2 * min(c, y);
        ans -= 2 * max(0, min(i, j));

        cout << ans << '\n';
    }
}
/*
    Contest Name : Codeforces Round #672 (Div. 2)
    Problem Title : B - Rock and Lever
    Problem Url : https://codeforces.com/contest/1420/problem/B
    Verdict : Wrong answer on pretest 2
    Time : 62 ms
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

        sort(arr, arr+n);

        lli mx = 2;
        int cursor = 0;
        int idx = 0;

        int cnt[34];
        mset(0, cnt);
        while(cursor < n){
            if(arr[cursor] < mx) cnt[idx]++;
            else cnt[++idx]++, mx *= 2;
            cursor++;
        }

        lli ans = 0;
        rep(i, 0, 34){
            if(cnt[i] >= 2) ans += cnt[i] * (cnt[i] - 1) / 2;
        }

        cout << ans << '\n';
    }
}
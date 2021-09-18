/*
    Contest Name : Codeforces Round #671 (Div. 2)
    Problem Title : C - Killjoy
    Problem Url : https://codeforces.com/contest/1419/problem/C
    Verdict : Wrong answer on pretest 2
    Time : 31 ms
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
        int n, x;
        cin >> n >> x;

        lli sum = 0;
        int cnt = 0;
        int ans = 0;
        rep(i, 0, n){
            int a;
            cin >> a;
            if(a != x){
                ans = 1;
                sum += a;
                cnt++;
            }
        }

        if(cnt > 0 && !(sum / cnt == x && sum % cnt == 0)) ans = 2;

        cout << ans << '\n';
    }
}
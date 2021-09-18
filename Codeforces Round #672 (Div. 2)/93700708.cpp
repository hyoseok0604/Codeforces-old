/*
    Contest Name : Codeforces Round #672 (Div. 2)
    Problem Title : C1 - Pokémon Army (easy version)
    Problem Url : https://codeforces.com/contest/1420/problem/C1
    Verdict : Accepted
    Time : 108 ms
    Memory : 1200 KB
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
        int n, q;
        cin >> n >> q;

        int a[n];
        rep(i, 0, n) cin >> a[i];

        int x = 0, y = -1;
        lli ans = 0;
        rep(i, 0, n-1){
            if(a[i] < a[i+1]){ // 다음께 크면
                if(x < y) ans += a[x] - a[y];
                x = i+1;
            }else{ // 다음께 작으면
                y = i+1;
            }
        }

        ans += a[x];
        
        cout << ans << '\n';
    }
}
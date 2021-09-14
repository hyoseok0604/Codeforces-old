/*
    Contest Name : CodeCraft-21 and Codeforces Round #711 (Div. 2)
    Problem Title : B - Box Fitting
    Problem Url : https://codeforces.com/contest/1498/problem/B
    Verdict : Time limit exceeded on test 11
    Time : 1000 ms
    Memory : 400 KB
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
        int n, w;
        cin >> n >> w;

        int a[n];
        rep(i, 0, n) cin >> a[i];

        sort(a, a + n);

        int c[21];
        mset(0, c);
        int cc = 0;
        rep(i, 0, n){
            if(a[i] == (1 << cc)) c[cc]++;
            else cc++, i--;
        }

        int ans = 1;
        int emp = w;
        int cur = 20;
        while(n > 0){
            int bf = emp;
            emp = max(emp - c[cur] * (1 << cur), emp % (1 << cur));

            c[cur] -= (bf - emp) / (1 << cur);
            n -= (bf - emp) / (1 << cur);
            
            // if((bf - emp) / (1 << cur) != 0) cout2(cur, (bf - emp) / (1 << cur));
            cur--;

            if(cur == -1 && n > 0) emp = w, ans++, cur = 20;
        }
        cout << ans << '\n';
    }
}
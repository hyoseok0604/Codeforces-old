/*
    Contest Name : Codeforces Round #713 (Div. 3)
    Problem Title : E - Permutation by Sum
    Problem Url : https://codeforces.com/contest/1512/problem/E
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
        int n, l, r, s;
        cin >> n >> l >> r >> s;

        lli mn = (r - l + 1) * (r - l + 2) / 2; // 1 ~ (r - l + 1)
        lli mx = mn + (n - (r - l + 1)) * (r - l + 1);

        if(s < mn || s > mx){
            cout << "-1\n";
            continue;
        }
        
        int m = r - l + 1;
        bool use[n+1];
        mset(0, use);
        int ans[m];
        rep(i, 0, m) ans[i] = i + 1;

        int q = (s - mn) / m;
        int qq = (s - mn) % m;
        rep(i, 0, m){
            ans[m - i - 1] += q;
            if(i < qq) ans[m - i - 1]++;
            use[ans[m-i-1]] = true;
        }

        int cur = 1;
        while(use[cur]) cur++;
        rep1(i, 1, n){
            if(i >= l && i <= r) cout << ans[i-l] << ' ';
            else{
                cout << cur << ' ';
                use[cur] = true;
                while(use[cur]) cur++;
            }
        }

        cout << '\n';
    }
}
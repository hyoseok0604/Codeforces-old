/*
    Contest Name : Codeforces Round #706 (Div. 2)
    Problem Title : B - Max and Mex
    Problem Url : https://codeforces.com/contest/1496/problem/B
    Verdict : Accepted
    Time : 61 ms
    Memory : 1300 KB
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

        vector<int> a(n);
        rep(i, 0, n) cin >> a[i];

        sort(a.begin(), a.end());

        int max = a[n-1]; // 변할수 없음
        int mex = 0;
        int cur = 0;
        while(cur < n && a[cur] == mex){
            mex++, cur++;
        }

        lli ans = 0;
        rep(i, 0, k){
            int e = (max + mex + 1) / 2;
            a.push_back(e);
            if(e != mex) break;
            if(e == max + 1){
                ans += k - i - 1;
                break;
            }
            mex++;
            while(cur < n && a[cur] == mex){
                mex++, cur++;
            }
        }

        sort(a.begin(), a.end());
        int b = -1;
        rep(i, 0, a.size()){
            if(a[i] != b) ans++, b = a[i];
        }

        cout << ans << '\n';
    }
}
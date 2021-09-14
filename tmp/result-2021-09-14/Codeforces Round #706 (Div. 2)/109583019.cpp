/*
    Contest Name : Codeforces Round #706 (Div. 2)
    Problem Title : C - Diamond Miner
    Problem Url : https://codeforces.com/contest/1496/problem/C
    Verdict : Accepted
    Time : 124 ms
    Memory : 2900 KB
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

        vector<lli> miner;
        vector<lli> diamond;

        rep(i, 0, n * 2){
            int x, y;
            cin >> x >> y;

            if(x == 0){
                miner.push_back(abs(y));
            }else{
                diamond.push_back(abs(x));
            }
        }

        sort(miner.begin(), miner.end());
        sort(diamond.begin(), diamond.end());

        long double ans = 0;
        long double k = 1;
        rep(i, 0, n){
            ans += sqrt((miner[i] * miner[i] + diamond[i] * diamond[i]) * k);
        }

        cout << setprecision(15);
        cout << ans << '\n';
    }
}
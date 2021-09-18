/*
    Contest Name : Grakn Forces 2020
    Problem Title : B - Arrays Sum
    Problem Url : https://codeforces.com/contest/1408/problem/B
    Verdict : Accepted
    Time : 31 ms
    Memory : 100 KB
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
        bool one = true;
        rep(i, 0, n){
            cin >> a[i];
            if(i > 0) one &= a[i] == a[i-1];
        }

        a.erase(unique(a.begin(), a.end()), a.end());

        if(k == 1 && one){
            cout << 1;
        }else if(k == 1){
            cout << -1;
        }else{
            int cnt = 1;
            int t = a.size();
            t -= k;
            while(t > 0){
                t -= (k - 1);
                cnt++;
            }
            cout << cnt;
        }
        cout << '\n';
    }
}
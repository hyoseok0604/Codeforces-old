/*
    Contest Name : Codeforces Round #698 (Div. 2)
    Problem Title : C - Nezzar and Symmetric Array
    Problem Url : https://codeforces.com/contest/1478/problem/C
    Verdict : Wrong answer on pretest 3
    Time : 109 ms
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
        lli n;
        cin >> n;

        lli d[n*2];
        rep(i, 0, n * 2) cin >> d[i];

        sort(d, d + n * 2);

        bool ans = true;
        for(int i = 0 ; i < n ; i++){
            if(d[i*2] != d[i*2+1]){
                ans = false;
                break;
            }
        }

        if(d[n*2-1] % (2 * n) != 0) ans = false;

        if(!ans){
            cout << "NO\n";
            continue;
        }

        int k = d[n*2-1] / (2 * n);

        for(int i = n * 2 - 3, j = 1 ; i >= 0 ; i -= 2, j++){
            if((d[i+2] - d[i]) % (2 * (n - j)) != 0){
                ans = false;
                break;
            }else{
                int t = (d[i+2] - d[i]) / (2 * (n - j));
                k -= t;
                if(t == 0 || k <= 0){
                    ans = false;
                    break;
                }
            }
        }

        if(ans && k > 0) cout << "YES\n";
        else cout << "NO\n";
    }
}
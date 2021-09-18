/*
    Contest Name : Codeforces Round #712 (Div. 2)
    Problem Title : B - Flip the Bits
    Problem Url : https://codeforces.com/contest/1504/problem/B
    Verdict : Accepted
    Time : 46 ms
    Memory : 3900 KB
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

        string a, b;
        cin >> a >> b;

        bool isChange = false;
        int c[n][2];
        mset(0, c);
        rep(i, 0, n){
            c[i][a[i]-'0']++;
        }

        rep(i, 1, n){
            rep(j, 0, 2){
                c[i][j] += c[i-1][j];
            }
        }

        bool ans = true;
        rep2(i, n - 1, 0){
            if(!isChange){
                if(a[i] != b[i]){
                    if(c[i][0] != c[i][1]) ans = false;
                    else isChange = true;
                }
            }else{
                if(a[i] == b[i]){
                    if(c[i][0] != c[i][1]) ans = false;
                    else isChange = false;
                }
            }
        }

        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
}
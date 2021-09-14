/*
    Contest Name : Deltix Round, Summer 2021 (open for everyone, rated, Div. 1 + Div. 2)
    Problem Title : C - Compressed Bracket Sequence
    Problem Url : https://codeforces.com/contest/1556/problem/C
    Verdict : Wrong answer on pretest 2
    Time : 15 ms
    Memory : 3600 KB
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

#define unq(v) v.erase(unique(v.begin(), v.end()), v.end())
#define srt(v) sort(v.begin(), v.end())

lli powerMod(int x, lli y, lli m)
{
    if (y == 0)
        return 1;
    lli p = powerMod(x, y / 2, m) % m;
    p = (p * p) % m;
 
    return (y % 2 == 0) ? p : (x * p) % m;
}

int main(){
    fastIO();

    // TC{
        int n;
        cin >> n;

        lli a[n];
        rep(i, 0, n) cin >> a[i];

        n -= n % 2;

        lli ans = 0;

        for(int i = 0 ; i < n ; i += 2){
            lli k = min(a[i], a[i+1]);
            ans += k;
            a[i] -= k, a[i+1] -= k;
        }

        for(int i = 4 ; i <= n ; i += 2){
            int zero = 0;
            lli sum = 0;

            lli b[n];
            rep(j, 0, n) b[j] = a[j];

            for(int j = 0 ; j < i ; j++){
                sum += b[j];

                if(b[0] == 0 || b[i-1] == 0) ans += 1;
                else if(b[0] + b[i-1] == sum){
                    lli k = min(b[0], b[i-1]);
                    ans += k + 1;
                    a[0] -= k, a[i-1] -= k;
                }
            }
            for(int j = 2 ; j <= n - i ; j+= 2){
                sum -= b[j-1];
                sum -= b[j-2];
                sum += b[i+j-1];
                sum += b[i+j-2];
                
                if(b[j] == 0 || b[j+i-1] == 0) ans += 1;
                else if(b[j] + b[j+i-1] == sum){
                    lli k = min(b[j], b[j+i-1]);
                    ans += k + 1;
                    a[j] -= k, a[j+i-1] -= k;
                }
            }
        }

        cout << ans << '\n';
    // }
}
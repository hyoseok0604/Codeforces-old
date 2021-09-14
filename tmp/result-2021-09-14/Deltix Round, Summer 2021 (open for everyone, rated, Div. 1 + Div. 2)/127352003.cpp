/*
    Contest Name : Deltix Round, Summer 2021 (open for everyone, rated, Div. 1 + Div. 2)
    Problem Title : B - Take Your Places!
    Problem Url : https://codeforces.com/contest/1556/problem/B
    Verdict : Time limit exceeded on test 4
    Time : 1000 ms
    Memory : 4400 KB
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

    TC{
        int n;
        cin >> n;

        int a[n];
        rep(i, 0, n) cin >> a[i];

        rep(i, 0, n) a[i] = a[i] % 2;

        int odd = 0, even = 0;
        rep(i, 0, n){
            if(a[i] % 2 == 0) even++;
            else odd++;
        }

        if(n % 2 == 0){
            if(even != odd){
                cout << "-1\n";
                continue;
            }
        }else{
            if(even - odd != -1 && even - odd != 1){
                cout << "-1\n";
                continue;
            }
        }

        lli ans1 = 1e16;
        if(n % 2 == 0 || even > odd){
            int b[n];
            rep(i, 0, n) b[i] = a[i];
            ans1 = 0;
            rep(i, 0, n){
                if(b[i] == i % 2){
                    continue;
                }else{
                    int k = 0;
                    while(b[i+k] != i % 2){
                        k++;
                    }
                    swap(b[i], b[i+k]);
                    ans1 += k;
                }
            }
        }

        lli ans2 = 1e16;
        if(n % 2 == 0 || even < odd){
            int b[n];
            rep(i, 0, n) b[i] = a[i];
            ans2 = 0;
            rep(i, 0, n){
                if(b[i] == (i + 1) % 2 ){
                    continue;
                }else{
                    int k = 0;
                    while(b[i+k] != (i + 1) % 2){
                        k++;
                    }
                    swap(b[i], b[i+k]);
                    ans2 += k;
                }
            }
        }

        cout << min(ans1, ans2) << '\n';
    }
}
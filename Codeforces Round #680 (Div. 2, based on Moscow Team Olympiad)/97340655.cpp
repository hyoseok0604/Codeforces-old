/*
    Contest Name : Codeforces Round #680 (Div. 2, based on Moscow Team Olympiad)
    Problem Title : C - Division
    Problem Url : https://codeforces.com/contest/1445/problem/C
    Verdict : Wrong answer on pretest 2
    Time : 15 ms
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

    vector<lli> primes;

    bool b[30501];
    mset(0, b);
    rep1(i, 2, 30500){
        if(!b[i]){
            primes.push_back(i);
            for(int j = 1 ; j * i <= 30500 ; j++){
                b[i * j] = true;
            }
        }
    }

    TC{
        lli p, q;
        cin >> p >> q;

        lli ans = 0;
        if(p % q != 0) ans = p;
        else ans = p / q;

        rep(i, 0, primes.size()){
            lli tp = p;
            lli tq = q;

            int cp = 0;
            int cq = 0;
            while(tp % primes[i] == 0) cp++, tp /= primes[i];
            while(tq % primes[i] == 0) cq++, tq /= primes[i];

            if(cp < cq) ans = p;
            else{
                lli a = p;
                rep(k, 0, cp - cq + 1){
                    a /= primes[i];
                }
                ans = max(ans, a);
            }
        }

        cout << ans << '\n';
    }
}
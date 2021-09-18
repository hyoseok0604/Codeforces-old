/*
    Contest Name : Codeforces Round #692 (Div. 2, based on Technocup 2021 Elimination Round 3)
    Problem Title : E - Poman Numbers
    Problem Url : https://codeforces.com/contest/1465/problem/E
    Verdict : Wrong answer on pretest 7
    Time : 31 ms
    Memory : 0 KB
*/

#include<bits/stdc++.h>

using namespace std;

#define lli long long int
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

lli power(lli x, lli y) {
    lli res = 1;
    while (y) {
        if (y % 2) res *= x;
        x *= x;
        y /= 2;
    }
    return res;
}


int main(){
    fastIO();
    
    int n;
    lli t;
    cin >> n >> t;

    string s;
    cin >> s;

    t += power(2, s[0] - 'a');
    t -= power(2, s[n-1] - 'a');

    int cnt[26];
    mset(0, cnt);

    rep(i, 1, n-1){
        cnt[s[i] - 'a']++;
    }

    rep2(i, 25, 0){
        lli tmp = power(2, i);
        while(cnt[i]--){
            if(abs(t) >= tmp){
                if(t < 0){
                    t += tmp;
                }else{
                    t -= tmp;
                }
            }else{
                if(t < 0){
                    t -= tmp;
                }else{
                    t += tmp;
                }
            }
        }
    }

    if(t == 0) cout << "YES\n";
    else cout << "NO\n";
}
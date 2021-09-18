/*
    Contest Name : Educational Codeforces Round 105 (Rated for Div. 2)
    Problem Title : A - ABC String
    Problem Url : https://codeforces.com/contest/1494/problem/A
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
        string s;
        cin >> s;

        bool flag = false;
        rep(i, 0, 2){
            rep(j, 0, 2){
                rep(k, 0, 2){
                    int c = 0;
                    bool tmpflag = true;
                    rep(l, 0, s.length()){
                        if(s[l] == 'A'){
                            c += (i == 1) ? 1 : -1;
                        }
                        if(s[l] == 'B'){
                            c += (j == 1) ? 1 : -1;
                        }
                        if(s[l] == 'C'){
                            c += (k == 1) ? 1 : -1;
                        }
                        if(c < 0) tmpflag = false;
                    }

                    flag |= (c == 0 && tmpflag);
                }
            }
        }

        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
}
/*
    Contest Name : Codeforces Round #721 (Div. 2)
    Problem Title : B1 - Palindrome Game (easy version)
    Problem Url : https://codeforces.com/contest/1527/problem/B1
    Verdict : Wrong answer on pretest 2
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
        int n;
        cin >> n;

        string s;
        cin >> s;

        int zero = 0;
        int c[5] = {0, 0, 0, 0, 0}; // 0 0, 0 1, 1 1, center 0, center 1

        rep(i, 0, s.length()){
            if(s[i] == '0') zero++;
        }

        rep(i, 0, s.length() / 2){
            int k = s[i] - '0' + s[s.length() - 1 - i] - '0';
            c[k]++;
        }

        if(s.length() % 2 == 1) c[3 + s[s.length() / 2] - '0'];

        int sc[2] = {0, 0}; // a, b
        int t = 0;

        bool beforeRev = false;
        while(zero > 0){
            if(c[1] == 0){ // 펠린드롬
                if(c[3] == 1){
                    c[4] = c[3];
                    c[3] = 0;
                }else{
                    c[0]--;
                    c[1]++;
                }
                zero--;
                sc[t%2]++;
                beforeRev = false;
            }else{
                if(!beforeRev) beforeRev = true;
                else{
                    if(c[1] == 1){
                        c[1]--;
                        c[2]++;
                    }else if(c[0] > 0){
                        c[0]--;
                        c[1]++;
                    }else{
                        c[1]--;
                        c[2]++;
                    }
                    zero--;
                    sc[t%2]++;
                    beforeRev = false;
                }
            }
            t++;
        }

        // cout2(sc[0], sc[1]);

        if(sc[0] == sc[1]) cout << "DRAW\n";
        else if(sc[0] > sc[1]) cout << "BOB\n";
        else cout << "ALICE\n";
    }
}
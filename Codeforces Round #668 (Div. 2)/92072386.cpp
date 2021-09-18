/*
    Contest Name : Codeforces Round #668 (Div. 2)
    Problem Title : C - Balanced Bitstring
    Problem Url : https://codeforces.com/contest/1405/problem/C
    Verdict : Accepted
    Time : 46 ms
    Memory : 1000 KB
*/

#include<bits/stdc++.h>

using namespace std;

#define lli long long
#define TC int TC;cin>>TC;while(TC--)
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0)
#define uMin(a, b) a = min(a, b)
#define uMax(a, b) a = max(a, b)
#define mset(a, arr) memset(arr, a, sizeof(arr))

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

        string s;
        cin >> s;

        int psum = 0;
        int zero = 0;
        int one = 0;
        int need = k / 2;
        rep(i, 0, k){
            if(s[i] == '?') zero++;
            else psum += s[i] - '0';
        }

        if(psum < need){
            int delta = min(need - psum, zero);
            zero -= delta;
            psum += delta;
            one += delta;
        }

        bool flag = psum == need;

        rep(i, k, n){
            if(s[i] != '?') psum += s[i] - '0';
            if(s[i-k] != '?') psum -= s[i-k] - '0';

            if(psum == need){
                if(s[i] == '?'){
                    if(s[i-k] != '?'){
                        s[i] = '0';
                    }
                }else if(s[i-k] == '?'){
                    if(zero > 0) zero--;
                    else one--, psum++;
                }
            }else if(psum > need){
                if(s[i] == '?'){
                    s[i] = '0';
                }
                if(s[i-k] == '?'){
                    if(one > 0) one--, psum--;
                    else zero--;
                }
            }else if(psum < need){
                if(s[i-k] == '?'){
                    if(zero > 0) zero--;
                    else flag = false;
                }else if(s[i] == '?'){
                    s[i] = '1';
                    psum++;
                }
            }

            flag &= psum == need;
        }
        
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
}
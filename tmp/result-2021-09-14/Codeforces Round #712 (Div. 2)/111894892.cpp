/*
    Contest Name : Codeforces Round #712 (Div. 2)
    Problem Title : C - Balance the Bits
    Problem Url : https://codeforces.com/contest/1504/problem/C
    Verdict : Accepted
    Time : 46 ms
    Memory : 900 KB
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

    // ofstream fout("aa.out");
    // ifstream fin("a.out");

    TC{
        int n;
        cin >> n;

        string s;
        cin >> s;

        int one = 0;
        rep(i, 0, s.length()){
            if(s[i] == '1') one++;
        }
        if(s[0] == '0' || s[s.length() - 1] == '0' || one % 2 == 1) cout << "NO\n";
        else{
            char a[s.length()];
            char b[s.length()];
            int cnt = 0;
            int cc = 0;
            rep(i, 0, s.length()){
                if(s[i] == '1'){
                    if(cc < one / 2) a[i] = b[i] = '(';
                    else a[i] = b[i] = ')';
                    cc++;
                }
            }

            int aa = 0;
            int bb = 0;
            rep(i, 0, s.length()){
                if(s[i] == '0'){
                    if(aa >= bb) a[i] = ')', b[i] = '(', aa--, bb++;
                    else a[i] = '(', b[i] = ')', aa++, bb--;
                }else{
                    if(a[i] == '(') aa++, bb++;
                    else aa--, bb--;
                }
            }

            cout << "YES\n";
            rep(i, 0, n){
                cout << a[i];
            }
            cout << '\n';
            rep(i, 0, n){
                cout << b[i];
            }
            cout << '\n';
        }
    }
}
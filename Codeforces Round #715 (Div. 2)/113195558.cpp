/*
    Contest Name : Codeforces Round #715 (Div. 2)
    Problem Title : B - TMT Document
    Problem Url : https://codeforces.com/contest/1509/problem/B
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

        int l = 0, r = s.length() - 1;
        int c = 0;
        while(l <= r){
            bool f = true;
            while(l <= r && s[l] == 'M'){
                if(c > 0) c--, l++;
                else{
                    f = false;
                    break;
                }
            }

            if(!f) break;

            while(l <= r && s[r] == 'M'){
                if(c > 0) c--, r--;
                else{
                    f = false;
                    break;
                }

                cout1("b");
            }

            if(!f) break;

            while(l <= r && s[l] == 'T' && s[r] == 'T') l++, r--, c++;
        }

        if(l > r && c == 0) cout << "YES\n";
        else cout << "NO\n";

        // cout3(l, r, c);
    }
}